x = gets.to_i
y = gets.to_i

if(x>y) then
    temp=x
    x=y
    y=temp
end
for i in (x+1)..(y-1) do
    if(i%5==2 or i%5==3) then
        puts(i)
    end
end