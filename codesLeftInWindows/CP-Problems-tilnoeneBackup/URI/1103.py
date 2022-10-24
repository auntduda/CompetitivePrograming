while True:
    try:
        l = [int(i) for i in input().split()]
        h1 = l[0]
        m1 = l[1]
        h2 = l[2]
        m2 = l[3]
        
        if(h1==0 and m1==0 and h2==0 and m2==0): break
        
        ti = h1*60+m1
        tf = h2*60+m2
        if(ti>tf): tf+=24*60
        
        print(tf-ti)
            
    except:
        break
