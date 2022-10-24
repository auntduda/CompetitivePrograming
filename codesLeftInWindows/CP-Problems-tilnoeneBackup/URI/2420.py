n = int(input())
v = [int(i) for i in input().split()]

sa = []
sa.append(v[0])
sb = []

for i in range(n):
    sb.append(0)
    
sb[n-1] = v[n-1]

for i in range(1, n):
    sa.append(v[i] + sa[i-1])

for i in range(n-2, -1, -1):
    sb[i] = v[i] + sb[i+1]
    
for i in range(0, n-1):
    if(sa[i] == sb[i+1]):
        print(i+1)