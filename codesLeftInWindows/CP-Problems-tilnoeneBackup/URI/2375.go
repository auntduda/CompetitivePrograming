package main
 
import (
    "fmt"
)

func main() {
    var n, a, b, c int;

    fmt.Scanf("%d", &n);
    fmt.Scanf("%d %d %d", &a, &b, &c);
    
    if(n > a || n > b || n > c){ 
        fmt.Printf("N\n");
    } else{ 
        fmt.Printf("S\n");
    }
}