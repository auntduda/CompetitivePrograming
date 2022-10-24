soma=0
ns = input().split()
a = int(ns[0])
n = int(ns[1])
k=2
while(n<=0):
    n = int(ns[k])
    k+=1

for i in range(0, n):
    soma+=(a+i)

print(soma)