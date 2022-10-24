var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(frase = lines.shift()){
    res = ""
    
    for(i = 0; i < frase.length; i++){
        if(frase[i] == '@') res += "a"
        else if(frase[i] == '&') res += "e"
        else if(frase[i] == '!') res += "i"
        else if(frase[i] == '*') res += "o"
        else if(frase[i] == '#') res += "u"
        else res += frase[i]
    }
    
    console.log(res)
}
