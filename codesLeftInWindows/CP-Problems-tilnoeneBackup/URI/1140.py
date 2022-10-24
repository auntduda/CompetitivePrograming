while True:
    frase = input().split()
    
    if frase[0] == '*': break
    
    ex = True
    for i in range(1, len(frase)):
        if(frase[i][0].upper() != frase[i-1][0].upper()):
            ex = False
            break
        
    if ex: print('Y')
    else: print('N')