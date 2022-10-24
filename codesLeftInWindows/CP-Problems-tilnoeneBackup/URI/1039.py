import math

while True:
    try:
        ls = [float(i) for i in input().split()]
        r1 = ls[0]
        x1 = ls[1]
        y1 = ls[2]
        r2 = ls[3]
        x2 = ls[4]
        y2 = ls[5]
        
        d = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)
        
        if(d <= r1*r1 and math.sqrt(d)+r2 <= r1): print("RICO")
        else: print("MORTO")

    except:
        break