using System;

class URI
{

    static void Main() {
        string a = System.Console.ReadLine().Trim(), b = System.Console.ReadLine().Trim(), c = System.Console.ReadLine().Trim();
        
        if(a=="vertebrado"){
            if(b=="ave"){
                if(c=="carnivoro"){
                    Console.Write("aguia\n");
                } else{
                    Console.Write("pomba\n");
                }
            } else{
                if(c=="onivoro"){
                    Console.Write("homem\n");
                } else{
                    Console.Write("vaca\n");
                }
            }
        } else{
            if(b=="inseto"){
                if(c=="hematofago"){
                    Console.Write("pulga\n");
                } else{
                    Console.Write("lagarta\n");
                }
            } else{
                if(c=="hematofago"){
                    Console.Write("sanguessuga\n");
                } else{
                    Console.Write("minhoca\n");
                }
            }
        }
        
    }
}