n = int(input())
for j in range(0, n):
    v = int(input())
    div=0
    if(v==2):
        print(str(v)+" eh primo")
    elif(v==1):
        print(str(v)+" nao eh primo")
    elif(v%2==0):
        print(str(v)+" nao eh primo")
    else:
        for i in range(3, v, 2):
            if(v%i==0):
                div=1
                break
        
        if(div==0):
            print(str(v)+" eh primo")
        else:
            print(str(v)+" nao eh primo")
        
    
