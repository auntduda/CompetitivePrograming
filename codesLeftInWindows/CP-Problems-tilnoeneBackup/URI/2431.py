def dentro(x, y, a, b):
    if(x <= a and y <= b): return True
    return False

ls = [int(i) for i in input().split()]

a1 = ls[0]
b1 = ls[1]
a2 = ls[2]
b2 = ls[3]
a = ls[4]
b = ls[5]

ans = False
c1x = b1 + a2;
c1y = min(a1, b2)

if(dentro(a, b, a1, b1) or dentro(b, a, a1, b1) or dentro(a, b, a2, b2) or dentro(b, a, a2, b2)):
    print("S")
    ans = True
elif(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)):
    print("S")
    ans = True
else:
    c1x = a1 + b2;
    c1y = min(b1, a2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)):
        print("S")
        ans = True
    
    c1x = a1 + a2;
    c1y = min(b1, b2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)):
        print("S")
        ans = True
    
    c1x = b1 + b2;
    c1y = min(a1, a2);
    
    if(dentro(a, b, c1x, c1y) or dentro(b, a, c1x, c1y)):
        print("S")
        ans = True
    
    if not ans: print("N")