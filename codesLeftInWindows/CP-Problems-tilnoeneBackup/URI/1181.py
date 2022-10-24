n = int(input())
e = input()
soma=0.0
for i in range(12):
    for j in range(12):
        valor = float(input())
        if(i==n): soma+=valor

if(e=='S'): print(soma)
else: print("{:.1f}".format(soma/12))