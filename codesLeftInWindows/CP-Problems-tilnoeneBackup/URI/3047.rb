m = gets.to_i
a = gets.to_i
b = gets.to_i
c = m-a-b

if(a>b) then
    if(a>c) then
        puts(a)
    else
        puts(c)
    end
else
    if(b>c) then
        puts(b)
    else
        puts(c)
    end
end
