while(True):
    n = int(input())
    res = ""
    if(n==0):
        break

    for i in range(1, n):
        res+=str(i)+" "

    print(res+str(n))