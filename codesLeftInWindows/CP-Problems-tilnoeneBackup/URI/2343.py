n = int(input())
tot = 0

k = []

for i in range(510):
    k.append([])
    for j in range(510):
        k[i].append(0)

for i in range(n):
    v = input().split()
    x = int(v[0])
    y = int(v[1])
    
    if(k[x][y] == 1):
        tot += 1
    
    k[x][y] += 1
    
if tot > 0:
    print(1)
else:
    print(0)
    