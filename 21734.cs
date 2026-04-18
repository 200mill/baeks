using System;

class Program
{
    public static void Main()
    {
        char[] inx = Console.ReadLine().ToCharArray();

        for(int i = 0; i < inx.Length; i++)
        {
            char[] t = ((int)inx[i]).ToString().ToCharArray();
            int x = 0;
            for(int v = 0; v < t.Length; v++)
            {
                x += int.Parse(t[v].ToString());
            }
            for(int v = 0; v < x; v++) Console.Write(inx[i]);
            Console.WriteLine();
        }
    }
}