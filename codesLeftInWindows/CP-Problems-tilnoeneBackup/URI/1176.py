fib = [0, 1]
t = int(input())
for i in range(t):
    n = int(input())
    while(len(fib)<=n):
        fib.append(fib[-2]+fib[-1])
    print("Fib({}) = {}".format(n, fib[n]))
