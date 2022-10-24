soma=0
i=0
x = gets.to_i
while(true) do
    z = gets.to_i
    if(z>x) then
        break
    end
end
while(soma<z) do
    soma+=i+x
    i=i+1
end
puts(i)
