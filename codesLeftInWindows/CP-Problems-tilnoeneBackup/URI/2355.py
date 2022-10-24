from math import floor, ceil

while True:
    n = int(input())
    
    if n == 0: break

    print("Brasil {} x Alemanha {}".format(int(floor(n/90)), int(ceil((7*n)/90))))