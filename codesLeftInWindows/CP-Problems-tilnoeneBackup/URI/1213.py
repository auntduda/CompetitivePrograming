while True:
    try:
        n = int(input())
        op = 1
        num = 1
        while(num%n!=0):
            num = (10*num+1)%n;
            op+=1;
        
        print(op)
    except:
        break