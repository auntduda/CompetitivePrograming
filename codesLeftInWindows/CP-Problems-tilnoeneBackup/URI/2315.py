mes = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
dtot = 0

a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

di = a[0]
mi = a[1]

df = b[0]
mf = b[1]

if(mi == mf):
    dtot = df - di
else:
    dtot += mes[mi]-di + df
    for i in range(mi+1, mf):
        dtot += mes[i]

print(dtot)