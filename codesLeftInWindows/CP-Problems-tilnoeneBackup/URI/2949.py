a=0
elf=0
h=0
m=0
x=0

n = int(input())
for i in range(0, n):
    nome = input().split()
    e = nome[-1]
    if(e=='A'):
        a=a+1
    elif(e=='E'):
        elf=elf+1
    elif(e=='H'):
        h=h+1
    elif(e=='M'):
        m=m+1
    else :
        x=x+1

print("{} Hobbit(s)".format(x))
print("{} Humano(s)".format(h))
print("{} Elfo(s)".format(elf))
print("{} Anao(s)".format(a))
print("{} Mago(s)".format(m))
