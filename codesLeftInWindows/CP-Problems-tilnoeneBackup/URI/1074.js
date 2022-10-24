var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

n = parseInt(lines.shift())

for(i=0;i<n;i++){
    x = parseInt(lines.shift())
    res = ""
    if(x==0){
        console.log("NULL");
    } else{
        if(x%2==0){
            res+="EVEN "
        } else{
            res+="ODD "
        }
        if(x>0){
            res+="POSITIVE"
        } else{
            res+="NEGATIVE"
        }
        console.log(res)
    }
}