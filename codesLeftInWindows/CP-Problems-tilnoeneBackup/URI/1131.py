escolha=1
jogos=0
vi=0
vg=0
emp=0
while(escolha==1):
    jogos=jogos+1
    n = input().split(' ')
    
    gi = int(n[0])
    gg = int(n[1])
    if(gi>gg):
        vi=vi+1
    elif(gi<gg):
        vg=vg+1
    else:
        emp=emp+1
    
    print("Novo grenal (1-sim 2-nao)")
    escolha = int(input())
        
print("{} grenais".format(jogos))
print("Inter:{}".format(vi))
print("Gremio:{}".format(vg))
print("Empates:{}".format(emp))
if(vi>vg):
    print("Inter venceu mais")
elif(vi<vg):
    print("Gremio venceu mais")
else:
    print("Nao houve vencedor")
        
    
