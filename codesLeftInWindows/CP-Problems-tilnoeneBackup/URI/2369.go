package main
 
import (
    "fmt"
)

func main() {
    var tot, n int;

    fmt.Scanf("%d", &n);
    
    tot = 7;
        
        if(n >= 101){
            tot += (n-100)*5;
            n = 100;
        }
        
        if(n >= 31){
            tot += (n-30)*2;
            n = 30;
        }
        
        if(n >= 11){
            tot += (n-10);
            n = 10;
        }
        
        fmt.Printf("%d\n", tot);
}