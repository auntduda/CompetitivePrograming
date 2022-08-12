n = int(input())

if(n==0):  
    print("0\n")
else:
    for i in range(1,1000000):
        if(((i**i)**i)==n):
            print(i)
            break