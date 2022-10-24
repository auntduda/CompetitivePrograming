var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

        escolha=1
		jogos=0
		vi=0
		vg=0
		emp=0
        while(escolha==1){
            jogos++;
            n = lines.shift().split(' ')
			
			gi = parseInt(n[0]);
            gg = parseInt(n[1]);
            if(gi>gg){
                vi++;
            } else if(gi<gg){
                vg++;
            } else{
                emp++;
            }
            console.log("Novo grenal (1-sim 2-nao)");
            escolha = parseInt(lines.shift())
        }
        console.log(jogos+" grenais");
        console.log("Inter:"+ vi);
        console.log("Gremio:"+ vg);
        console.log("Empates:"+ emp);
        if(vi>vg){
            console.log("Inter venceu mais");
        } else if(vi<vg){
            console.log("Gremio venceu mais");
        } else{
            console.log("Nao houve vencedor");
        }
