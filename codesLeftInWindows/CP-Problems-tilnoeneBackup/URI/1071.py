soma=0
x = int(input())
y = int(input())

if(x>y):
    temp=x
    x=y
    y=temp

if(x%2==0):
    x=x+1
else:
    x=x+2

for i in range(x, y, 2):
    soma=soma+i

print(soma)
