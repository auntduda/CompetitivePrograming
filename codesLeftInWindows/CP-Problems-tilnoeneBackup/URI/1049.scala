import java.util.Scanner
import java.lang.Math

object Main {
    def main(args: Array[String]) {
        
        val ler = new Scanner(System.in)
        
        var a = ler.nextLine();
        var b = ler.nextLine();
        var c = ler.nextLine();

        if(a.equals("vertebrado")){
            if(b.equals("ave")){
                if(c.equals("carnivoro")){
                    System.out.printf("aguia\n");
                } else{
                    System.out.printf("pomba\n");
                }
            } else{
                if(c.equals("onivoro")){
                    System.out.printf("homem\n");
                } else{
                    System.out.printf("vaca\n");
                }
            }
        } else{
            if(b.equals("inseto")){
                if(c.equals("hematofago")){
                    System.out.printf("pulga\n");
                } else{
                    System.out.printf("lagarta\n");
                }
            } else{
                if(c.equals("hematofago")){
                    System.out.printf("sanguessuga\n");
                } else{
                    System.out.printf("minhoca\n");
                }
            }
        }

    }
}
