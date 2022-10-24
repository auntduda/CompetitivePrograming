while True:
    try:
        l = input().split()
        x = int(l[0])
        y = int(l[1])
        
        print(x ^ y)
            
    except:
        break
