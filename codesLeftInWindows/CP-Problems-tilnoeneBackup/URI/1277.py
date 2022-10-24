n = int(input())

for i in range(n):
    k = int(input())
    
    nomes = input().split()
    freq = input().split()
    
    falt = []
    for j in range(k):
        p = 0
        f = 0
        
        for let in freq[j]:
            if(let == 'P'): p += 1
            elif(let == 'A'): f += 1
        
        if((p*100) / (p+f) < 75): falt.append(nomes[j])
    
    for i in range(len(falt)):
        print(falt[i], end = '')
        if(i != len(falt)-1): print(' ', end = '')
    
    print()