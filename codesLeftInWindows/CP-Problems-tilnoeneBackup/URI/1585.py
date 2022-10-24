n = int(input())
for i in range(n):
    v = [int(j) for j in input().split(' ')]
    print(int(v[0]*v[1]/2), "cm2")