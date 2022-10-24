from math import inf

fib = [5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025]

k = int(input())
n = 4
pos = 1
i = 0

fib.append(inf)

while(pos != k+1):
    if(n > fib[i]): 
        i += 1

    if(n != fib[i]): 
        pos += 1

    n += 1

print(n-1)