from math import gcd

n = int(input())

for i in range(n):
    l = input().split()
    print(gcd(int(l[0]), int(l[1])))