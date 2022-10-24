ls = [int(i) for i in input().split()]

p = ls[0]
j1 = ls[1]
j2 = ls[2]
r = ls[3]
a = ls[4]

if(r==1):
    if(a==1):
        print("Jogador 2 ganha!")
    else:
        print("Jogador 1 ganha!")

else:
    if(a==1):
        print("Jogador 1 ganha!")
    else:
        if((j1+j2)%2==0):
            if(p==1):
                print("Jogador 1 ganha!")
            else:
                print("Jogador 2 ganha!")
        else:
            if(p==1):
                print("Jogador 2 ganha!")
            else:
                print("Jogador 1 ganha!")