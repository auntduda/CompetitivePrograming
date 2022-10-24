soma=0
x = gets.to_i
y = gets.to_i

if(x>y) then
    temp=x
    x=y
    y=temp
end

if(x%2==0) then
    x=x+1
else
    x=x+2
end

for i in x..(y-1) do
    if(i%2!=0) then
        soma=soma+i
    end
end

puts soma