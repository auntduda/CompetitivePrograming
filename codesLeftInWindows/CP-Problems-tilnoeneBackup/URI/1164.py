n = int(input())
for i in range(0, n):
    x = int(input())
    soma=0
    for j in range(1, x):
        if(x%j==0):
            soma=soma+j

    if(soma==x):
        print(str(x)+" eh perfeito")
    else:
        print(str(x)+" nao eh perfeito")
