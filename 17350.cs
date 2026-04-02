using System;

class Program
{
    public static void Main()
    {
        int fx = int.Parse(Console.ReadLine());
        bool what = false;
        for(int i = 0; i < fx; i++)
        {
            if(Console.ReadLine() == "anj")
                what = true;
        }
        if(what)
            Console.WriteLine("뭐야;");
        else
            Console.WriteLine("뭐야?");
    }
}