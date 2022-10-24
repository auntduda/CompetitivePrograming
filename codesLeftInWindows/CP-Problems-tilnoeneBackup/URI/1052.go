package main
 
import (
    "fmt"
)

func main() {
    var n int;

    fmt.Scanf("%d", &n);

    meses := [12]string{"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};        

    fmt.Println(meses[n-1]);

}