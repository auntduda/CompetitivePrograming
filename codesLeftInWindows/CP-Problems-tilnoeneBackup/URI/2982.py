n = int(input())

soma = 0
for i in range(n):
    e, v = input().split()
    v = int(v)
    
    if e == 'G':
        soma -= v
    else:
        soma += v
    
if soma >= 0:
    print("A greve vai parar.")
else:
    print("NAO VAI TER CORTE, VAI TER LUTA!")