soma=0
i=0
x = int(input())
while(True):
    z = int(input())
    if(z>x):
        break

while(soma<z):
    soma=soma+i+x
    i=i+1

print(i)
