n = int(input())
r = [int(i) for i in input().split(' ')]
k=0
for i in range(1, n):
    if(r[i]<r[i-1]):
        print(i+1)
        k=1
        break
if(k==0): print(0)