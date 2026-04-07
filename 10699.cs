using System;

class Program
{
    public static void Main()
    {

        Console.WriteLine(DateTime.UtcNow.AddHours(9).ToString("yyyy-MM-dd"));
    }
}