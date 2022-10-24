n = int(input())
soma = 0
maxdir = 0

v = [int(i) for i in input().split()]

for i in range(n):
    soma += v[i]

i = 0

while True:
    c = i;
    if(v[i] % 2 == 0): i -= 1
    else: i += 1
    
    if(v[c] > 0):
        v[c] -= 1
        soma -= 1
    
    if(i < 0 or i >= n): break
    if(i > maxdir): maxdir = i
    
print(str(maxdir+1)+' '+str(soma))