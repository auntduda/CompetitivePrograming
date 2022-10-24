n = int(input())

for i in range(n):
    a, b = input().split()
    
    for j in range(min(len(a), len(b))):
        print(a[j], end='')
        print(b[j], end='')
    
    if(len(a) > len(b)):
        print(a[j+1:])
    else:
        print(b[j+1:])