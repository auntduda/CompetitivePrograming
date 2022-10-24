n = int(input())
for i in range(n):
    c = [int(j) for j in input().split(' ')]
    if(len(str(c[0]))==1):
        print('0', end='')
    print(str(c[0])+':', end='')
    if(len(str(c[1]))==1):
        print('0', end='')
    print(str(c[1])+' - A porta ',end='')
    if(c[2]==1):
        print('abriu!')
    else:
        print('fechou!')
    

