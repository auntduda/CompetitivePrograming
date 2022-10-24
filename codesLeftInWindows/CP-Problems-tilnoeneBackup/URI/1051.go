package main
 
import (
    "fmt"
)

func main() {
    var renda float64;

    fmt.Scanf("%f", &renda);

    if(renda<=2000){
            fmt.Printf("Isento\n");
        } else{
            if(renda<=3000){
                fmt.Printf("R$ %.2f\n", (8*(renda-2000))/100);
            } else{
                if(renda<=4500){
                    fmt.Printf("R$ %.2f\n", (18*(renda-3000))/100+80);
                } else{
                    fmt.Printf("R$ %.2f\n", (28*(renda-4500))/100+270+80);
                }
            }
        }

}