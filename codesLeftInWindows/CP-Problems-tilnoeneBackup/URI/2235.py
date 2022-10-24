v = [int(i) for i in input().split(' ')]
a=v[0]
b=v[1]
c=v[2]
if(abs(a-b)==0 or abs(a-c)==0 or abs(b-c)==0):
    print("S")
elif(a+b-c==0 or a+b+c==0 or a-b+c==0 or a-b-c==0):
    print("S")
else:
    print("N")