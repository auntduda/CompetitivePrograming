while linha = gets
    ls = linha.split(' ')
        xa = (ls[0]).to_f
        ya = (ls[1]).to_f
        xb = (ls[2]).to_f
        yb = (ls[3]).to_f
        cmd = (ls[4]).to_f
        enf = (ls[5]).to_f
        
        ab = Math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb))
        
        cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180
        enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180
        
        puts "%0.03f" % (ab * (1/Math.tan(cmd) + 1/Math.tan(enf)))
end