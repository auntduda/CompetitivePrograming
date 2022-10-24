from math import log10
from math import floor

n = int(input())

for i in range(n):
    k = [int(j) for j in input().split()]
    print(floor(log10(k[0]**k[1]))+1)