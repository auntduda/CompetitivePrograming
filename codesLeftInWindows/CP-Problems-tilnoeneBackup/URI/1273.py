c = 1

while True:
    try:
        n = int(input())
        
        if n == 0:
            break
        elif c != 1:
            print()
            
        maior = 0
        pal = []
        for i in range(n):
            pal.append(input())
            if len(pal[-1]) > maior:
                maior = len(pal[-1])
        
        for i in pal:
            print(i.rjust(maior))
            
        c += 1
        
    except:
        break