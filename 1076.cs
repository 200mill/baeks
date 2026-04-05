using System;

class Program
{
    public static void Main()
    {
        string fir = Console.ReadLine();
        string sec = Console.ReadLine();
        string value = "";
        switch(fir)
        {
            case "black":
                value += "0";
                break;
            case "brown":
                value += "1";
                break;
            case "red":
                value += "2";
                break;
            case "orange":
                value += "3";
                break;
            case "yellow":
                value += "4";
                break;
            case "green":
                value += "5";
                break;
            case "blue":
                value += "6";
                break;
            case "violet":
                value += "7";
                break;
            case "grey":
                value += "8";
                break;
            case "white":
                value += "9";
                break;
        }

        switch(sec)
        {
            case "black":
                value += "0";
                break;
            case "brown":
                value += "1";
                break;
            case "red":
                value += "2";
                break;
            case "orange":
                value += "3";
                break;
            case "yellow":
                value += "4";
                break;
            case "green":
                value += "5";
                break;
            case "blue":
                value += "6";
                break;
            case "violet":
                value += "7";
                break;
            case "grey":
                value += "8";
                break;
            case "white":
                value += "9";
                break;
        }

        ulong iValue = ulong.Parse(value);

        string thr = Console.ReadLine();

        switch(thr)
        {
            case "black":
                Console.WriteLine(iValue);
                break;
            case "brown":
                Console.WriteLine(iValue*10);
                break;
            case "red":
                Console.WriteLine(iValue*100);
                break;
            case "orange":
                Console.WriteLine(iValue*1_000);
                break;
            case "yellow":
                Console.WriteLine(iValue*10_000);
                break;
            case "green":
                Console.WriteLine(iValue*100_000);
                break;
            case "blue":
                Console.WriteLine(iValue*1_000_000);
                break;
            case "violet":
                Console.WriteLine(iValue*10_000_000);
                break;
            case "grey":
                Console.WriteLine(iValue*100_000_000);
                break;
            case "white":
                Console.WriteLine(iValue*1_000_000_000);
                break;
        }

    }
}

