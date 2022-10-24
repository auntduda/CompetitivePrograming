while True:
    try:
        ls = [int(i) for i in input().split()]
        l = ls[0]
        c = ls[1]
        ra = ls[2]
        rb = ls[3]
        
        if(l == 0 and c == 0 and ra == 0 and rb == 0): break
        
        cxa = ra;
        cya = c-ra;
                
        cxb = l-rb;
        cyb = rb;

        if(ra*2 <= l and ra*2 <= c and rb*2 <= l and rb*2 <= c):
            if((cxa - cxb) * (cxa - cxb) + (cya - cyb) * (cya - cyb)  >= (ra + rb) * (ra + rb)): print("S")
            else: print("N")
        else: print("N")

    except:
        break