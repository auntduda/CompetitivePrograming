a = [0, 0, 0]

a[0] = int(input())
a[1] = int(input())
a[2] = int(input())

t1 = a[1]*2 + a[2]*4
t2 = a[0]*2 + a[2]*2
t3 = a[0]*4 + a[1]*2

print(min(min(t1, t2), t3))
