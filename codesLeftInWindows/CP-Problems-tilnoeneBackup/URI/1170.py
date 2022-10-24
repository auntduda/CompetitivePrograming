from math import log2
from math import ceil

n = int(input())

for i in range(n):
    k = float(input())
    print("{} dias".format(ceil(log2(k))))