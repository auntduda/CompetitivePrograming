package main
 
import (
    "fmt"
)

func main() {
    var a, b int;

    fmt.Scanf("%d %d", &a, &b);
    
    if(a == 0){
            fmt.Printf("C\n");
        } else{
            if(b == 0){
                fmt.Printf("B\n");
            } else{
             fmt.Printf("A\n");
            }
        }
}