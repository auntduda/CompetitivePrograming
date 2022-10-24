while True:
    try:
        n = int(input())
        k = input().split()
        
        sat = k.count('0')
        ins = k.count('1')
        
        if(sat > ins): print('Y')
        else: print('N')
        
    except:
        break