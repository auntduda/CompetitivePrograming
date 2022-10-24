var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

        escolha=0;
        x=-1;
        while(true){
            n = parseFloat(lines.shift())
            if(n>=0 && n<=10){
                if(x==-1){
                    x=n;
                } else{
                    y=n;
                    break;
                }
            } else{
                console.log("nota invalida");
            }
        }
        console.log("media =", ((x+y)/2).toFixed(2));
        
        while(escolha!=2){
            if(escolha!=1 && escolha!=2){
                console.log("novo calculo (1-sim 2-nao)");
                escolha=2;
                escolha = parseInt(lines.shift())
            } else if(escolha==1){
                x=-1;
                while(true){
                    n = parseFloat(lines.shift())
                    if(n>=0 && n<=10){
                        if(x==-1){
                            x=n;
                        } else{
                            y=n;
                            break;
                        }
                    } else{
                        console.log("nota invalida");
                    }
                }
                console.log("media =", ((x+y)/2).toFixed(2));
                console.log("novo calculo (1-sim 2-nao)");
                escolha = parseInt(lines.shift())
            } else{
                break;
            }
        }
