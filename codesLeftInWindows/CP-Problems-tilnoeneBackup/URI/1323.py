while True:
    n = int(input())
    if(n==0):
        break
    if(n==1):
        print(1)
    else:
        soma=0
        for i in range(1, n+1):
            soma+=i**2
        print(soma)