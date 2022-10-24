while True:
    try:
        n = int(input())

        s1 = []
        s2 = []
        
        trab = [int(i) for i in input().split()]
        
        s1.append(trab[0])
        
        for i in range(n):
            s2.append(0)
            
        s2[n-1] = trab[n-1]
        
        for i in range(1, n):
            s1.append(s1[i-1] + trab[i])
        
        for i in range(n-2, -1, -1):
            s2[i] = s2[i+1] + trab[i]
        
        menor = s2[0]
        
        for i in range(1, n):
            if(abs(s2[i]-s1[i-1])<menor and abs(s2[i]-s1[i-1])>=0):
                menor=abs(s2[i]-s1[i-1])
                
        print(menor)
        
    except:
        break