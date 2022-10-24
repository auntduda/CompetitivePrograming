n = int(input())

for i in range(n):
    v = int(input())
    
    um = 0
    maior = 0
    seq = True
    
    while(v > 0):
        if(v % 2 != 0):
            um += 1
            seq = True
            if(seq == True and um > maior):
                maior = um
        else:
            seq = False
            um = 0
        v >>= 1
    
    print(maior)