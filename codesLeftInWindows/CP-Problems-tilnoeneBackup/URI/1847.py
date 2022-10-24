l = [int(i) for i in input().split()]

a = l[0]
b = l[1]
c = l[2]

feliz = False

if(a>b and b<=c): feliz=True;
elif(b>a and c>b and c-b>=b-a): feliz=True;
elif(a>b and b>c and b-c<a-b): feliz=True;
elif(a==b and c>b): feliz=True;

if(feliz): print(":)");
else: print(":(")
