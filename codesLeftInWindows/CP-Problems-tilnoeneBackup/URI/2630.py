n = int(input())
for i in range(0, n):
    e = input()
    ns = input().split()
    r = int(ns[0])
    g = int(ns[1])
    b = int(ns[2])
    
    if(e=="min"):
        if(r<g):
            if(r<b):
                res = r
            else:
                res = b
        else:
            if(g<b):
                res = g
            else:
                res = b
    elif(e=="mean"):
        res = ((r+g+b)/3)
    elif(e=="max"):
        if(r>g):
            if(r>b):
                res = r
            else:
                res = b
        else:
            if(g>b):
                res = g
            else:
                res = b
    else:
        res = ((0.3*r)+(0.59*g)+(0.11*b))
    
    print("Caso #{}: {}".format(i+1, int(res)))

