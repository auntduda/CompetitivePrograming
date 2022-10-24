package main
 
import (
    "fmt"
)

func main() {
    var a,b,c int;
    var feliz bool;
    
    feliz = false;
    
    fmt.Scanf("%d %d %d", &a, &b, &c);

    if(a>b && b<=c){ feliz=true;
    }else if(b>a && c>b && c-b>=b-a){ feliz=true;
    }else if(a>b && b>c && b-c<a-b){ feliz=true;
    }else if(a==b && c>b){ feliz=true;}
        
    if(feliz == true){ fmt.Printf(":)\n");
    }else{ fmt.Printf(":(\n");
    }
}