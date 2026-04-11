using System;

class Program
{
    public static void Main()
    {
        char[] input = Console.ReadLine().ToCharArray();

        for(int i = 0; i < input.Length; i++)
        {
            if(char.IsUpper(input[i]))
            {
                input[i] = char.ToLower(input[i]);
            }
            else if(char.IsLower(input[i]))
            {
                input[i] = char.ToUpper(input[i]);
            }
        }

        Console.WriteLine(new string(input));
    }
}