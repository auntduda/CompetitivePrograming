c = int(input())

for j in range(c):
    r = g = b = 0
    n = int(input())
    
    for i in range(n):
        ls = input().split()
        ac = ls[0]
        bc = ls[1]
        
        if ac == 'R':
            if bc == 'G': r += 1
            r += 1
        elif ac == 'G':
            if bc == 'B': g += 1
            g += 1
        else:
            if bc == 'R': b += 1
            b += 1
    
    if r == g and r == b: print("trempate")
    elif r > g and r > b: print("red")
    elif g > r and g > b: print("green")
    elif b > r and b > g: print("blue")
    else: print("empate")
    
    