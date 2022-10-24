while True:
    try:
        n = int(input())
        
        direita = []
        esquerda = []
        
        for i in range(61):
            direita.append(0)
            esquerda.append(0)
        
        for i in range(n):
            p = input().split()
            if(p[1] == 'D'): direita[int(p[0])] += 1
            else: esquerda[int(p[0])] += 1
        
        pares = 0
        
        for i in range(30, 61):
            pares += min(direita[i], esquerda[i])
        
        print(pares)
        
    except:
        break
