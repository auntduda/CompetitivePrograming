while(True):
    n = int(input())
    if(n==0):
        break
    if(n%2!=0):
        n+=1
    soma=0
    for i in range(0, 5):
        soma+=n
        n+=2
    print(soma)