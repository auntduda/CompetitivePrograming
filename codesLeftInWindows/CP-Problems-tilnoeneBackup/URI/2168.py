n = int(input())
rua = []
for i in range(n+1):
    rua.append([int(i) for i in input().split(' ')])
seg = []
for i in range(n):
    seg.append([])
    for j in range(n):
        luzes=0
        if(rua[i][j]==1):
            luzes+=1
        if(rua[i][j+1]==1):
            luzes+=1
        if(rua[i+1][j]==1):
            luzes+=1
        if(rua[i+1][j+1]==1):
            luzes+=1

        if(luzes>1):
            seg[i].append('S')
        else:
            seg[i].append('U')
    
for i in range(n):
    for j in range(n):
        print(seg[i][j], end='')
    print()