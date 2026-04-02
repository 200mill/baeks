using System;

class Program
{
    public static void Main()
    {
        string[] inputs = Console.ReadLine().Split(' ');
        decimal a = decimal.Parse(inputs[0]);
        decimal b = decimal.Parse(inputs[1]);

        decimal output = a/b;
        Console.WriteLine(output);
    }
}