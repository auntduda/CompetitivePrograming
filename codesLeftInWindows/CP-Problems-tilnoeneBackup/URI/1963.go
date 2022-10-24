package main
 
import (
    "fmt"
)

func main() {
    var a, b float64;

    fmt.Scanf("%f %f", &a, &b);
  
    fmt.Printf("%.2f%%\n", (b*100)/a-100);
}