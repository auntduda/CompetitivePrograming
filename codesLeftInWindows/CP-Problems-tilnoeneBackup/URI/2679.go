package main
 
import (
    "fmt"
)

func main() {
    var a int;

    fmt.Scanf("%d", &a);
    
    if(a % 2 == 0){
        fmt.Printf("%d\n", a+2);
    } else{
        fmt.Printf("%d\n", a+1); 
    }
}