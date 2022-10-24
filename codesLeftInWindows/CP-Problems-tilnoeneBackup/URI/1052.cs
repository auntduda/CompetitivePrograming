using System;

class URI
{
    static void Main() {
        int n = int.Parse(System.Console.ReadLine().Trim());
        string[] meses = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        
        Console.Write(meses[n-1]+"\n");
    }
}