package main
 
import (
    "fmt"
)

func main() {
    var a, b int;

    fmt.Scanf("%d", &a);
    fmt.Scanf("%d", &b);
    
    if((a <= 8 && b >= 9) || (b <= 8 && a >= 9)){
        fmt.Printf("final\n");
    } else if((a % 2 == 0 && b == a-1) || (b % 2 == 0 && a == b-1)){
        fmt.Printf("oitavas\n");
    } else if((a <= 12 && b >= 13) || (a >= 13 && b <= 12) || (a <= 4 && b >= 5) || (a >= 5 && b <= 4)){
        fmt.Printf("semifinal\n");
    } else{
        fmt.Printf("quartas\n");
    }

}