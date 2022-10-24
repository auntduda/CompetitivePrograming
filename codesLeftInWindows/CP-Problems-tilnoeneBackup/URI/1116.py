n = int(input())

for i in range(0, n):
    ns = input().split(' ')
    x = int(ns[0])
    y = int(ns[1])
    if y==0:
        print("divisao impossivel")
    else:
        print("{:.1f}".format(x/y))
