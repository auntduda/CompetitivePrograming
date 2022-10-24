while True:
    l = input().split()
    n = int(l[0])
    m = int(l[1])
    
    if n == m == 0: break
    
    v = []
    for i in range(10010):
        v.append(0)
    
    linha = [int(i) for i in input().split()]
    
    rep = 0
    for i in linha:
        v[i] += 1
        
    for i in v:
        if(i > 1):
            rep += 1
    
    print(rep)