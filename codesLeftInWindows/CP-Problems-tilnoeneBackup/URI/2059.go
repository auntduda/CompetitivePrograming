package main
 
import (
    "fmt"
)

func main() {
    var p, j1, j2, r, a int;

    fmt.Scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
  
    if(r==1){ // j1 roubou
            if(a==1){
                fmt.Printf("Jogador 2 ganha!\n");
            } else{
                fmt.Printf("Jogador 1 ganha!\n");
            }
        } else{ // j1 nao robou
            if(a==1){
                fmt.Printf("Jogador 1 ganha!\n");
            } else{
                if((j1+j2)%2==0){
                    if(p==1){
                        fmt.Printf("Jogador 1 ganha!\n");
                    } else{
                        fmt.Printf("Jogador 2 ganha!\n");
                    }
                } else{
                    if(p==1){
                        fmt.Printf("Jogador 2 ganha!\n");
                    } else{
                        fmt.Printf("Jogador 1 ganha!\n");
                    }
                }
            }
        }
}