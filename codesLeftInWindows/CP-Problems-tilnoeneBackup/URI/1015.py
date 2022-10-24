from math import sqrt

l1 = [float(i) for i in input().split(' ')]
l2 = [float(i) for i in input().split(' ')]

xa = l1[0]
ya = l1[1]
xb = l2[0]
yb = l2[1]

print("{:.4f}".format(sqrt((xa-xb)**2+(ya-yb)**2)))