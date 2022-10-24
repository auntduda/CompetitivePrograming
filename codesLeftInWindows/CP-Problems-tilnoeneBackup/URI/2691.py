n = int(input())

for i in range(n):
    k = input().split('x')
    x = int(k[0])
    y = int(k[1])
    
    for j in range(5, 11):
        print("{} x {} = {}".format(x, j, x*j), end = '')
        
        if(x != y):
            print(" && {} x {} = {}".format(y, j, y*j), end = '')
            
        print()
    
        
