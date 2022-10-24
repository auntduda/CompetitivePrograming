n = int(input())
i=0
while i<n:
    ns = input().split(' ')
    x = int(ns[0])
    y = int(ns[1])
    si=0
    if(x>y):
        temp=x
        x=y
        y=temp
    if(x%2==0):
        x=x+1
    else:
        x=x+2
    j=x
    while j<y:
        si=si+j
        j=j+2

    print(si)
    i=i+1
