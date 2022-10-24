var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
    
a = lines.shift();
b = lines.shift();
c = lines.shift();

if(a=="vertebrado"){
    if(b=="ave"){
        if(c=="carnivoro"){
            console.log("aguia");
        } else{
            console.log("pomba");
        }
    } else{
        if(c=="onivoro"){
            console.log("homem");
        } else{
            console.log("vaca");
        }
    }
} else{
    if(b=="inseto"){
        if(c=="hematofago"){
            console.log("pulga");
        } else{
            console.log("lagarta");
        }
    } else{
        if(c=="hematofago"){
            console.log("sanguessuga");
        } else{
            console.log("minhoca");
        }
    }
}