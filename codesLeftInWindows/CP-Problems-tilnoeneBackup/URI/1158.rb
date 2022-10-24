n = gets.to_i

for i in 1..n do
    ns = gets.chomp().split(' ')
    x = ns[0].to_i
    y = ns[1].to_i
    if(x%2==0) then
        x=x+1
    end
    soma=0
    for j in 1..y do
        soma=soma+x
        x=x+2
    end
    puts(soma)
end