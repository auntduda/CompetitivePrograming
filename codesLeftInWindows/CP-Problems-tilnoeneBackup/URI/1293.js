var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var lines = input.split('\n')

while(linha = lines.shift()){
    ls = linha.split(' ')
    
    xa = parseFloat(ls[0])
    ya = parseFloat(ls[1])
    xb = parseFloat(ls[2])
    yb = parseFloat(ls[3])
    cmd = parseFloat(ls[4])
    enf = parseFloat(ls[5])

    ab = Math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb))

    cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180;
    enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180;
        

    console.log((ab * (1/Math.tan(cmd) + 1/Math.tan(enf))).toFixed(3));

}
