var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

ori = lines.shift()
k = parseInt(lines.shift())

ig = 0
pos = 0

for(i=0;i<5;i++){
    f = lines.shift()
    
    temp = 0;
    for(j = 0; j < f.length; j++){
        if(f[j] == ori[j]){
            temp += 1;
        }
    }
            
    if(temp > ig){
        ig = temp;
        pos = i+1;
    }    
}

if(ori.length - ig > k) console.log(-1);
else{
    console.log(pos);
    console.log(ori.length - ig)
}

