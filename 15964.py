def at(a: int, b: int) -> int:
    return a**2 - b**2
a,b=map(int, input().split())
print(at(a,b))