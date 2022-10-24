while True:
    try:
        n = int(input())
        if n == 0: break
    
        v = [int(i) for i in input().split()]
    
        s1 = v[0]+v[2*n-1]
        s2 = v[n]+v[n-1]
        
        for i in range(n):
            if(v[i]+v[2*n-(i+1)]<s1): s1=v[i]+v[2*n-(i+1)]
            if(v[i]+v[2*n-(i+1)]>s2): s2=v[i]+v[2*n-(i+1)]
        
        print(str(s2)+' '+str(s1))
        
    except:
        break