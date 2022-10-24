while True:
    n = input()
    try:
        n=int(n)
        if(n<0):
            break
        print(hex(n)[:2]+hex(n)[2:].upper())
            
    except:
        if(len(n)>1):
            if(n[1]=='x'):
                print(int(n, 16))
            else:
                print(hex(n)[:2]+hex(n)[2:].upper())
        else:
            print(hex(n)[:2]+hex(n)[2:].upper())
        
    