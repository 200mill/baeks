// Problem : https://www.acmicpc.net/problem/34934

using System;

struct dept
{
    public int year;
    public string name;
}

class Program
{
    public static void Main()
    {        
        int depts = int.Parse(Console.ReadLine());
        dept[] array = new dept[depts];
        
        for(int i = 0; i < depts; i++)
        {
            string[] input = Console.ReadLine().Split(' ');
            dept tDept = new dept();
            tDept.name = input[0];
            tDept.year = int.Parse(input[1]);

            array[i] = tDept;
        }
        
        int index = 0;
        int Max = 0;
        for(int i = 0; i < depts; i++)
        {
            if(array[i].year > Max)
            {
                index = i;
                Max = array[i].year;
            }
        }

        Console.WriteLine(array[index].name);
        return;
    }
}