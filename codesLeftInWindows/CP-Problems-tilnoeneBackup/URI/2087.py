while True:
    n = int(input())
    
    if n == 0: break
    
    pal = []
    
    for i in range(n):
        pal.append(input())
        
    pal = sorted(pal)
    
    existe = True
    for i in range(0, len(pal)-1):
        if not existe: break
        
        for j in range(i+1, len(pal)):
            
            #comparar palavras
            sub = True
            for it in range(0, min(len(pal[i]), len(pal[j]))):
                if(pal[i][it] != pal[j][it]):
                    sub = False
                    break
            
            if sub:
                existe = False
                break
    
    if existe: print("Conjunto Bom")
    else: print("Conjunto Ruim")