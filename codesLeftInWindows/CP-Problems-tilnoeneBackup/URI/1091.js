var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(true){
    n = parseInt(lines.shift())
    if(n==0) break;
    linha = lines.shift()
    ls = linha.split(' ');
    cx = parseInt(ls[0]);
    cy = parseInt(ls[1]);

    for(i=0;i<n;i++){
        linha2 = lines.shift()
        ls2 = linha2.split(' ');
        x = parseInt(ls2[0]);
        y = parseInt(ls2[1]);

        if(x==cx || y==cy) console.log("divisa");
        else if(x>cx){
            if(y>cy) console.log("NE");
            else console.log("SE");
        } else{
            if(y>cy) console.log("NO");
            else console.log("SO");
        }
    }
}