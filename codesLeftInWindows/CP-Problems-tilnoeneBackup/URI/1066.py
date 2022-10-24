pos=0
neg=0
par=0
imp=0

for i in range(0,5):
    a = int(input())
    if(a>0):
        pos=pos+1
    elif(a<0):
        neg=neg+1
    if(a%2==0):
        par=par+1
    else:
        imp=imp+1

print("{} valor(es) par(es)".format(par))
print("{} valor(es) impar(es)".format(imp))
print("{} valor(es) positivo(s)".format(pos))
print("{} valor(es) negativo(s)".format(neg))
