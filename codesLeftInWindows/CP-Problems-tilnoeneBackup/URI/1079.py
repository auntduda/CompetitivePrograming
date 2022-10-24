n = int(input())

for i in range(0, n):
    v = input().split()
    a = float(v[0])
    b = float(v[1])
    c = float(v[2])
    print("{:.1f}".format((a*2+b*3+c*5)/10))