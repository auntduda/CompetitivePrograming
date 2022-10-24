while True:
    try:
        n = int(input())
        
        if n == 0:
            break
        
        v = sorted([int(i) for i in input().split()])
        
        a = b = i = 0
        ex_a = False
        while i < n:

            if i == n-1:
                b = v[i]
                break

            if v[i] != v[i+1]:
                if not ex_a:
                    a = v[i]
                    ex_a = True
                else:
                    
                    b = v[i]
                    break
                
                i -= 1
            
            i += 2
            
        print(a, b)
        
    except:
        break