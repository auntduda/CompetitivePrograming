while True:
    m = int(input())
    if m == 0: break
    
    pos = 1
    mov = 0
    
    for i in range(m):
        menor = 3
        k = [int(j) for j in input().split()]
        
        for j in range(0, 3):
            linha = k[j]
            if(linha == 0 and abs(j-pos) < menor):
                menor = abs(j-pos)
                posd = j
        pos = posd
        mov += menor
    print(mov)
        