using System;

class Program
{
    public static void Main()
    {
        string name;
        while((name = Console.ReadLine()) != null)
        {
            char[] temp = name.ToCharArray();
            for(int p = 0; p < temp.Length; p++)
            {
                switch(temp[p])
                {
                    case 'i':
                        temp[p] = 'e';
                        break;
                    case 'e':
                        temp[p] = 'i';
                        break;
                    case 'I':
                        temp[p] = 'E';
                        break;
                    case 'E':
                        temp[p] = 'I';
                        break;
                    default:
                        break;
                }
            }
            Console.WriteLine(new string(temp));
        }    
    }
}