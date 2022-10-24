n = int(input())
maior = [float(j) for j in input().split(' ')]
for i in range(n-1):
    v = [float(j) for j in input().split(' ')]
    if(v[1]>maior[1]):
        maior[1]=v[1]
        maior[0]=v[0]
if(maior[1]>=8):
    print(int(maior[0]))
else:
    print("Minimum note not reached")