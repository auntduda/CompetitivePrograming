def adota(especie, raca, nome):
    if(especie != "cachorro"):
        return False
    
    if(len(nome) == 1):
        return False
        
    comp = False
    for i in nome:
        if i[0] == raca[0]:
            comp = True
            break
        
    return comp

n = int(input())
tot = 0

for i in range(n):
    especie = input()
    raca = input()
    nome = input().split()
    
    if i != n-1:
        lixo = input()
    
    if adota(especie, raca, nome):
        tot += 1

print(tot)