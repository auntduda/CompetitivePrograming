from math import gcd

ls = [int(i) for i in input().split()]

a = ls[0]
b = ls[1]
c = ls[2]
d = ls[3]

num = (d*a+c*b)
den = d*b
mdc = gcd(num, den)

print(num//mdc, den//mdc)