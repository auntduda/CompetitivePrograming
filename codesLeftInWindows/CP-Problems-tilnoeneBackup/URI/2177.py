def dist(xa, ya, xb, yb):
    return (xa-xb)**2 + (ya-yb)**2

ls = [int(i) for i in input().split()]

x = ls[0]
y = ls[1]
n = ls[2]

c = False
for i in range(n):
    lls = [int(j) for j in input().split()]

    xi = lls[0]
    yi = lls[1]
    ti = lls[2]
    
    ans = dist(xi, yi, x, y)
    
    if ans < ti**2:
        if c:
            print("", i+1, end = '')
        elif not c:    
            c = True
            print(i+1, end = '')
            
            
if not c:
    print(-1)