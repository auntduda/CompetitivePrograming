k=0
while True:
    n = int(input())
    if n==0:
        break
    if k==0:
        k+=1
    else:
        print()
        
    pal = []
    maior = 0
    for i in range(n):
        pal.append(input().split())
        frase = ""
        for j in range(len(pal[i])):
            frase+=pal[i][j]
            if(j!=len(pal[i])-1):
                frase+=" "
        pal[i]=frase;
        if(len(pal[i])>maior):
            maior=len(pal[i])

    for i in range(len(pal)):
        print((maior-len(pal[i]))*" ", end='')
        print(pal[i])