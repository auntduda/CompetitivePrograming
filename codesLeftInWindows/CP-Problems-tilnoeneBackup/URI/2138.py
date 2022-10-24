while True:
    try:
        n = input()
        
        v = []
        for i in range(10):
            v.append(0)
        
        for i in n:
            v[int(i)] += 1
        
        maior = pmaior = 0
        
        for i in range(10):
            if(v[i] >= maior):
                maior = v[i]
                pmaior = i
                
        print(pmaior)
        
    except:
        break