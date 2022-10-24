n = int(input())
soma=0
for i in range(n):
    c = [int(j) for j in input().split(' ')]
    if(c[0]==1001):
        soma+=1.5*c[1]
    elif(c[0]==1002):
        soma+=2.5*c[1]
    elif(c[0]==1003):
        soma+=3.5*c[1]
    elif(c[0]==1004):
        soma+=4.5*c[1]
    else:
        soma+=5.5*c[1]
print("%.2f" % soma)