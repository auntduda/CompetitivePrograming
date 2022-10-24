k = [int(i) for i in input().split()]

ta = k[0]
tb = k[1]

a = ta
b = tb
ori = b
v = 1

while(b - a < ori):
    b += tb
    a += ta
    v += 1

print(v)