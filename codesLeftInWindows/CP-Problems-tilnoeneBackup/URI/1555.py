n = int(input())
    
for i in range(n):
    k = [int(i) for i in input().split()]
        
    x = k[0]
    y = k[1]
        
    rafael = 9*x*x+y*y;
    beto = 2*x*x+25*y*y;
    carlos = -100*x+y*y*y;
        
    if(rafael > beto):
        if(rafael > carlos): print("Rafael", end = '')
        else: print("Carlos", end = '')
    else:
        if(beto > carlos): print("Beto", end = '')
        else: print("Carlos", end = '')
    
    print(" ganhou");
