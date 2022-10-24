soma=0
l = int(input())
escolha = input()
for i in range(12):
    for j in range(12):
        valor = float(input())
        if(j==l):
            soma=soma+valor
    
if(escolha=="S"):
    print("{:.1f}".format(soma))
else:
    print("{:.1f}".format(soma/12))