n = [int(i) for i in input().split(' ')]
c = n[0]+n[1]+n[2]
if(c>24):
    print(c-24)
elif(c<0):
    print(24+c)
elif(c==24):
    print(0)
else:
    print(c)