n = int(input())

matriz=[]

for i in range(n):
    matriz.append([])

#acima for i in range(1,n//2+1):
for i in range(1,n//2+2):
    k=1
    #esquerda
    for j in range(0,n//2):
        print(k, end=' ')
        if(k<i):
            k+=1
    #direita
    p=k
    for j in range(n//2,n):    
        if(j-p>i):
            k-=1

        print(k, end=' ')

    print()
print()
#abaixo
for i in range(n//2+1,n+1):
    k=1
    p=n
    #esquerda
    for j in range(1,n+1):
        print(k, end=' ')
        if(k<i):
            k+=1
        else:
            k=8
    print()
print(matriz)


