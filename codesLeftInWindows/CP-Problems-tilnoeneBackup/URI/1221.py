from math import sqrt

n = int(input())

for i in range(n):
    v = int(input())
    
    primo = True
    
    if v == 2 : primo = True
    elif v % 2 == 0: primo = False
    else:
        for j in range(3, int(sqrt(v))+1, 2):
            if(v % j == 0):
                primo = False
                break
    
    if(primo): print("Prime")
    else: print("Not Prime")