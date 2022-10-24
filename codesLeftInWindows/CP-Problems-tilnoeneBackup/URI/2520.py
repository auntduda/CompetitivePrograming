while True:
    try:
        l = [int(i) for i in input().split()]
        n = l[0]
        m = l[1]
        
        for i in range(n):
            c = [int(j) for j in input().split()]
            for j in range(m):
                if(c[j] == 1):
                    xp = j
                    yp = i
                if(c[j] == 2):
                    xa = j
                    ya = i
                    
        print(abs(xa-xp)+abs(ya-yp))
        
    except:
        break