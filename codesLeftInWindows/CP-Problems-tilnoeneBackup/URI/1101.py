while(True):
    ns = input().split()
    n = int(ns[0])
    m = int(ns[1])
    if(m<=0 or n<=0):
        break
    if(m>n):
        temp=n
        n=m
        m=temp
    soma=0
    for i in range(m, n+1):
        soma+=i;
        print(i, end = ' ')

    print("Sum={}".format(soma))

