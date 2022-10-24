ls = input().split()
a = int(ls[0])
b = int(ls[1])
c = int(ls[2])
d = int(ls[3])

if(a*b == c*d):
    print("0");
elif(a*b < c*d): 
    print("1");
else:
    print("-1");