n = int(input())

for i in range(1, n+1):
    print("Instancia {}".format(i))
    
    vetor = []
    lin = []
    col = []
    quad = []
    
    for j in range(9):
        vetor.append([])
        lin.append([])
        col.append([])
        quad.append([])
        
        for k in range(10):
            lin[j].append(0)
            col[j].append(0)
            quad[j].append(0)
    
    certo = True
    
    for j in range(0, 9):
        vetor[j] = [int(i) for i in input().split()]

    for j in range(0, 9):
        for k in range(0, 9):
            v = vetor[j][k]

            if(certo):
                if(lin[j][v] > 0): certo = False
                elif(col[k][v] > 0): certo = False
                    
                lin[j][v] += 1
                col[k][v] += 1
                
    cq = 0
    
    for j in range(0, 7, 3):
        for k in range(0, 7, 3):
            for it in range(j, j+3):
                for jt in range(k, k+3):
                    elem = vetor[it][jt];
                    
                    if(certo):
                        if(quad[cq][elem] > 0): certo = False
                        quad[cq][elem] += 1

            cq += 1

    if(certo): print("SIM")
    else: print("NAO")
    print()
    
    