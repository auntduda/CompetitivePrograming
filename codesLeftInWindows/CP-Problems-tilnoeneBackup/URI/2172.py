while True:
    x = [int(i) for i in input().split(' ')]
    if(x[0]==0 and x[1]==0):
        break
    print(x[0]*x[1])
