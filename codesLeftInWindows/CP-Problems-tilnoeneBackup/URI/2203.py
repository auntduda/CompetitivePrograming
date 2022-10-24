from math import sqrt

while True:
    try:
        ls = input().split(' ')
        xf = int(ls[0])
        yf = int(ls[1])
        xi = int(ls[2])
        yi = int(ls[3])
        vi = int(ls[4])
        r1 = int(ls[5])
        r2 = int(ls[6])
        x = (xf-xi)*(xf-xi)
        y = (yf-yi)*(yf-yi)
        if(sqrt(x+y)+vi*1.5>r1+r2): print("N")
        else: print("Y")
    except:
        break