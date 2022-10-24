x = gets.to_i
y = gets.to_i

if(x>y) then
	temp=x;
	x=y;
	y=temp;
end
soma=0;
for i in x..y do
	if(i%13!=0) then
		soma+=i;
	end
end
puts(soma);
