using System;

class Program
{
    public static void Main()
    {
        string[] str = Console.ReadLine().Split(' ').ToArray();
        string F = str[0] + str[1];
        string S = str[2] + str[3];
        Console.WriteLine(long.Parse(F) + long.Parse(S));
    }
}