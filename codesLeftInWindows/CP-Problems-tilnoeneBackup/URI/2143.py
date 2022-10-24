while True:
    t = int(input())
    if(t==0): break
    for i in range(0, t):
        v = int(input())
        if(v%2==0): print((v-1)*2)
        else: print((v*2-1))
