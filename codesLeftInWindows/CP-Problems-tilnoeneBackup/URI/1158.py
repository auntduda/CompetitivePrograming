n = int(input())

for i in range(0, n):
    ns = input().split()
    x = int(ns[0])
    y = int(ns[1])
    if(x%2==0):
        x=x+1
    soma=0
    for j in range(0, y):
        soma=soma+x
        x=x+2
    print(soma)