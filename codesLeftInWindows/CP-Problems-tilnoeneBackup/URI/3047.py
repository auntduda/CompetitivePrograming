m = int(input())
a = int(input())
b = int(input())
c = m-a-b

if(a>b):
    if(a>c):
        print(a)
    else:
        print(c)
    
else:
    if(b>c):
        print(b)
    else:
        print(c)
    