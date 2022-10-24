package main
 
import (
    "fmt"
)

func main() {
    var a, b, v int;

    i := 1
    for i <= 16 {
        fmt.Scanf("%d", &v);
        
        if(v == 1){ a = i; }
        if(v == 9){ b = i; }
        i = i+1
    }
    
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