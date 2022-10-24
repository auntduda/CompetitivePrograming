from math import sqrt
from math import floor

while True:
    ns = input().split()
    a = int(ns[0])
    if(a==0):
        break
    b = int(ns[1])
    c = int(ns[2])
    print("{:.0f}".format(floor(sqrt((a*b)*(100.0/c)))))
