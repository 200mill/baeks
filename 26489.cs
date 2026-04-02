using System;

class Program
{
    public static void Main()
    {
        int v;
        for(int i = 0;; i++)
        {
            if(Console.ReadLine() != "gum gum for jay jay")
            {
                v = i;
                break;
            }
        }

        Console.WriteLine(v);
    }
}
