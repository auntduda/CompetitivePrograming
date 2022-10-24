while True:
    try:
        k = int(input())
        
        a = 0
        b = 0
        
        if(k == 0): break
        
        for i in range(k):
            v = [int(i) for i in input().split()]
            
            if(v[0] > v[1]): a += 1
            elif(v[0] < v[1]): b += 1
        
        print(a, b)
        
    except:
        break