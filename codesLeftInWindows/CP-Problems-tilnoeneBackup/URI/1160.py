from math import floor

t = int(input())
for i in range(0, t):
    ns = input().split()
    pa = int(ns[0])
    pb = int(ns[1])
    g1 = float(ns[2])
    g2 = float(ns[3])
    anos=0
    while(True):
        if(anos>100 or pa>pb):
            break
        
        pa+=floor(pa*g1/100)
        pb+=floor(pb*g2/100)
        anos+=1
    
    if(anos>100):
        print("Mais de 1 seculo.")
    else:
        print(str(anos)+" anos.")
    
