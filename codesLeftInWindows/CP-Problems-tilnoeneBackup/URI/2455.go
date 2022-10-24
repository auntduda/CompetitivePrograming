package main
 
import (
    "fmt"
)

func main() {
    var a, b, c, d int;

    fmt.Scanf("%d %d %d %d", &a, &b, &c, &d);
    
    if(a*b == c*d){ 
        fmt.Printf("0\n");
    } else if(a*b < c*d){ 
        fmt.Printf("1\n");
    } else{ 
        fmt.Printf("-1\n");
    }
}