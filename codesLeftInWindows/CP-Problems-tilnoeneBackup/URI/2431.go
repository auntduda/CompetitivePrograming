package main
 
import (
    "fmt"
)

func min(a int, b int) int {
    if(a < b){
        return a;
    }
    return b;
}

func dentro(x int, y int, a int, b int) bool {
    if(x <= a && y <= b){ return true;}
    return false;
}

func main() {
    var a1, b1, a2, b2, a, b, c1x, c1y int;
    var ans bool;

    ans = false;

    fmt.Scanf("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a, &b);
    
    c1x = b1 + a2;
    c1y = min(a1, b2);
    
    if(dentro(a, b, a1, b1) || dentro(b, a, a1, b1) || dentro(a, b, a2, b2) || dentro(b, a, a2, b2)){
        fmt.Printf("S\n");
        ans = true;
    } else if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
        fmt.Printf("S\n");
        ans = true;
    } else{
        c1x = a1 + b2;
        c1y = min(b1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            fmt.Printf("S\n");
            ans = true;
        }
        
        c1x = a1 + a2;
        c1y = min(b1, b2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            fmt.Printf("S\n");
            ans = true;
        }
        
        c1x = b1 + b2;
        c1y = min(a1, a2);
        
        if(dentro(a, b, c1x, c1y) || dentro(b, a, c1x, c1y)){
            fmt.Printf("S\n");
            ans = true;
        }
        
    }
    
    if(!ans){ fmt.Printf("N\n");}
    
}