using System;

class Program
{
    public static void Main()
    {
        string[] asdf = Console.ReadLine().Split(' ');
        char[] a = asdf[0].ToCharArray();
        char[] b = asdf[1].ToCharArray();

        ulong output = 0;

        for(int i = 0; i < a.Length; i++)
        {
            for(int j = 0; j < b.Length; j++)
            {
                output += (ulong)int.Parse(a[i].ToString())*(ulong)int.Parse(b[j].ToString());
            }
        }

        Console.WriteLine(output);
    }
}