alc=0
gas=0
die=0

while(True):
    e = int(input())
    if(e==4):
        break
    elif(e==1):
        alc=alc+1
    elif(e==2):
        gas=gas+1
    elif(e==3):
        die=die+1

print("MUITO OBRIGADO")
print("Alcool: {}".format(alc))
print("Gasolina: {}".format(gas))
print("Diesel: {}".format(die))