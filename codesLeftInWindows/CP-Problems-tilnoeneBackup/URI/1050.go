package main
 
import (
    "fmt"
)

func main() {
    var ddd int;

    fmt.Scanf("%d", &ddd);

    if(ddd==61){
        fmt.Printf("Brasilia\n");
    } else if(ddd==71){
        fmt.Printf("Salvador\n");
    } else if(ddd==11){
        fmt.Printf("Sao Paulo\n");
    } else if(ddd==21){
        fmt.Printf("Rio de Janeiro\n");
    } else if(ddd==32){
        fmt.Printf("Juiz de Fora\n");
    } else if(ddd==19){
        fmt.Printf("Campinas\n");
    } else if(ddd==27){
        fmt.Printf("Vitoria\n");
    } else if(ddd==31){
        fmt.Printf("Belo Horizonte\n");
    } else{
        fmt.Printf("DDD nao cadastrado\n");
    }

}