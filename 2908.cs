using System;

class Program
{
    public static void Main()
    {
        string[] asdf = Console.ReadLine().Split(' ');

        int[] asd = new int[2];
        asd[0] = int.Parse(new string(asdf[0].Reverse().ToArray()));
        asd[1] = int.Parse(new string(asdf[1].Reverse().ToArray()));
        
        if(asd[0] > asd[1])
            Console.WriteLine(asd[0]);
        else
            Console.WriteLine(asd[1]);
    }
}