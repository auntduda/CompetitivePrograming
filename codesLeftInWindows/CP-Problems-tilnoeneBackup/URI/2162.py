n = int(input())

sub = [int(i) for i in input().split()]
res = 1

if(sub[0]>sub[1]):
    for i in range(0, n-1):
        if(i%2==0):
            if(sub[i]<=sub[i+1]): res=0
        else:
            if(sub[i]>=sub[i+1]): res=0

elif(sub[0]<sub[1]):
    for i in range(0, n-1):
        if(i%2==0):
            if(sub[i]>=sub[i+1]): res=0
        else:
            if(sub[i]<=sub[i+1]): res=0
else: res=0

print(res)