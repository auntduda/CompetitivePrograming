fib = [0, 1]
n = int(input())
res = ""
for i in range(2, n):
    fib.append(fib[i-1]+fib[i-2])
for i in range(0, n):
    res=res+str(fib[i])
    if(i==n-1):
        print(res)
    else:
        res=res+" "
