package main
 
import (
    "fmt"
)

func main() {
    var a, b, q, r int;

    fmt.Scanf("%d %d", &a, &b);

    q = a/b;
    r = a%b;
       
    if(r<0){
        if(q<0){ 
            q-=1;
            
        }else if(q>0){ 
            q+=1;
        }else{
            if(a-((q-1)*b)>=0){
                q-=1;
            } else{
                q+=1;
            }
        }
        r = a-(q*b);
    }
        
    fmt.Printf("%d %d\n", q, r);

}