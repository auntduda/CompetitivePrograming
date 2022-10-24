var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

linha = lines.shift().split(' ')
n = parseInt(linha[0])
m = parseInt(linha[1])

ter = new Array(1024)
val = 1
for(i=0;i<n;i++){
    ter[i] = new Array(m)
    ls = lines.shift().split(' ')
    for(j=0;j<m;j++){
        ter[i][j] = parseInt(ls[j])
    }
}
for(i=1;i<n-1;i++){
    for(j=1;j<m-1;j++){
        if(ter[i][j]==42 && ter[i-1][j-1]==7 && ter[i-1][j]==7 && ter[i-1][j+1]==7 && ter[i][j-1]==7 && ter[i][j+1]==7 && ter[i+1][j-1]==7 && ter[i+1][j]==7 && ter[i+1][j+1]==7){
            console.log((i+1)+" "+(j+1))
            val = 0
        }
    }
}
if(val==1){
    console.log("0 0")
}
