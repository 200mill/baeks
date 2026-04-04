# csc.ps1 - Easy C# code tester
# Usage: .\csc.ps1 <file.cs>

param(
    [Parameter(Position=0)]
    [string]$File
)

if (-not $File) {
    Write-Host "Usage: .\csc.ps1 <file.cs>" -ForegroundColor Yellow
    exit 1
}

if (-not (Test-Path $File)) {
    Write-Host "Error: File '$File' not found" -ForegroundColor Red
    exit 1
}

$TempDir = Join-Path $env:TEMP "csc_runner"
$ProjectDir = Join-Path $TempDir "Project"

# Clean up and create temp project
if (Test-Path $TempDir) { Remove-Item $TempDir -Recurse -Force }
New-Item -ItemType Directory -Path $ProjectDir -Force | Out-Null

# Create minimal .csproj
$csproj = @"
<Project Sdk="Microsoft.NET.Sdk">
  <PropertyGroup>
    <OutputType>Exe</OutputType>
    <TargetFramework>net10.0</TargetFramework>
    <ImplicitUsings>enable</ImplicitUsings>
    <Nullable>enable</Nullable>
  </PropertyGroup>
</Project>
"@
$csproj | Out-File (Join-Path $ProjectDir "Program.csproj") -Encoding UTF8

# Copy the source file
Copy-Item $File (Join-Path $ProjectDir "Program.cs")

# Build and run
Write-Host "`n=== Compiling $File ===" -ForegroundColor Cyan
Push-Location $ProjectDir
try {
    dotnet build --nologo -v q
    if ($LASTEXITCODE -eq 0) {
        Write-Host "`n=== Running ===" -ForegroundColor Green
        dotnet run --no-build
    }
} finally {
    Pop-Location
}
