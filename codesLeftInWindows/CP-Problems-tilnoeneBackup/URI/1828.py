def jogo(a, b):
    if(a==b): return 2
    if(a=="tesoura" and b=="papel"): return 1
    if(a=="papel" and b=="pedra"): return 1
    if(a=="pedra" and b=="lagarto"): return 1
    if(a=="lagarto" and b=="Spock"): return 1
    if(a=="Spock" and b=="tesoura"): return 1
    if(a=="tesoura" and b=="lagarto"): return 1
    if(a=="lagarto" and b=="papel"): return 1
    if(a=="papel" and b=="Spock"): return 1
    if(a=="Spock" and b=="pedra"): return 1
    if(a=="pedra" and b=="tesoura"): return 1
    return 0

n = int(input())
for i in range(0, n):
    linha = input().split()
    s = linha[0]
    r = linha[1]
    print("Caso #{}: ".format(i+1), end='')
    res = jogo(s, r)
    if(res==2): print("De novo!")
    elif(res==1): print("Bazinga!")
    else: print("Raj trapaceou!")