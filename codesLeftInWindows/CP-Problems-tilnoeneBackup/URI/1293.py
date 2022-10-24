import math

while True:
    try:
        ls = [float(i) for i in input().split()]
        xa = ls[0]
        ya = ls[1]
        xb = ls[2]
        yb = ls[3]
        cmd = ls[4]
        enf = ls[5]
        
        ab = math.sqrt((xa - xb)*(xa - xb) + (ya - yb)*(ya - yb))
        
        cmd = (cmd * 3.14159265358979323846264338327950288419716939937510) / 180
        enf = (enf * 3.14159265358979323846264338327950288419716939937510) / 180
        
        print("{:.3f}".format(ab * (1/math.tan(cmd) + 1/math.tan(enf))))
        
    except:
        break