l = int(input())
e = input()
soma = 0
for i in range(0,12):
    for i in range(0,12):
        valor = float(input())
        if(i==l): soma+=valor
if(e=='S'): print("{:.1f}".format(soma))
else: print("{:.1f}".format(soma/12.0))
    