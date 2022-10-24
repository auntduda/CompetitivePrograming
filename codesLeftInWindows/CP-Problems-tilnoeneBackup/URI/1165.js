var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

n = parseInt(lines.shift())
for(j=0;j<n;j++){
    v = parseInt(lines.shift())
    div=0
    if(v==2){
        console.log(v+" eh primo")
    } else if(v==1){
        console.log(v+" nao eh primo")
    } else if(v%2==0){
        console.log(v+" nao eh primo")
    } else{
        for(i=3;i<v;i+=2){
            if(v%i==0){
                div=1
                break
            }
        }
        if(div==0){
            console.log(v+" eh primo")
        } else{
            console.log(v+" nao eh primo")
        }
    }
}