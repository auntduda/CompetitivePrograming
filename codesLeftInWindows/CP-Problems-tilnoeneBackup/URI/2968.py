from math import ceil

l = [int(i) for i in input().split()]
v = l[0]
n = l[1]

for i in range(10, 91, 10):
    k = ceil((i * v*n) / 100)
    print(k, end = '')
    
    if(i == 90): print()
    else: print(" ", end = '')
