from math import gcd

while True:
    try:
        l = [int(i) for i in input().split()]
        a = l[0]
        b = l[1]
        c = l[2]
        
        if(b > a and b > c):
            temp = a
            a = b
            b = temp
        elif(c > a and c > b):
            temp = a
            a = c
            c = temp
        
        triplaP = False
        triplaPP = False
        
        if(a*a == b*b + c*c):
            triplaP = True
            if(gcd(gcd(a, b), c) == 1): triplaPP = True
        
        if(triplaP):
            if(triplaPP): print("tripla pitagorica primitiva")
            else: print("tripla pitagorica")
        else: print("tripla")
        
    except:
        break