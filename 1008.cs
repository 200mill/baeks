using System;

class Program
{
    public static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        int a = int.Parse(inputs[0]);
        int b = int.Parse(inputs[1]);

        decimal output = a/b;
        Console.WriteLine(output);
    }
}