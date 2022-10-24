from math import sqrt

while True:
    try:
        l = [float(i) for i in input().split()]
        
        a = l[0]
        b = l[1]
        c = l[2]
        
        raiz = 2*(a*a*b*b+b*b*c*c+c*c*a*a)-(a*a*a*a + b*b*b*b + c*c*c*c)
        
        if raiz > 0: 
            print("{:.3f}".format(1/3.0 * sqrt(raiz)))
        else:
            print("-1.000")
        
    except:
        break