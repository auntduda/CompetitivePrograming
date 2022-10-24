e = input()
soma=0
for i in range(0,12):
    for j in range(0,12):
        v=float(input())
        if(j>i and i+j>11):
            soma+=v
if(e=='S'):
    print('%.1f' % (soma))
else:
    print('%.1f' % (soma/30))