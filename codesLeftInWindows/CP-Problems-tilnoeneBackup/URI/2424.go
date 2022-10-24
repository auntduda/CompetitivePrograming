package main
 
import (
    "fmt"
)

func main() {
    var x, y int;

    fmt.Scanf("%d %d", &x, &y);

    if(x < 0 || x > 432 || y < 0 || y > 468){ fmt.Printf("fora\n");
    }else{ fmt.Printf("dentro\n"); }
}