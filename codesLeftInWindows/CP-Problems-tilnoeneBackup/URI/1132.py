x = int(input())
y = int(input())

if(x>y):
	temp=x
	x=y
	y=temp

soma=0
for i in range(x, y+1):
	if(i%13!=0):
		soma+=i
print(soma)
