while True:
    l = input().split()
    
    if(len(l) == 1): break
    
    q = int(l[0])
    d = int(l[1])
    p = int(l[2])
    
    pg = (q*d*p)//(p-q)
        
    print(pg, end = '')
    
    if(pg == 1): print(" pagina")
    else: print(" paginas")
