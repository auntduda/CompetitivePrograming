x = io.read("*number")
y = io.read("*number")

if(x>y) then
	temp=x;
	x=y;
	y=temp;
end
soma=0;
for i=x,y,1 do
	if(i%13~=0) then
		soma=soma+i;
	end
end
print(soma);
