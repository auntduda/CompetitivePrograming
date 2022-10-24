n = gets.to_i
for i in 1..n do
    x = gets.to_i
    soma=0
    for j in 1..x-1 do
        if(x%j==0) then
            soma+=j
        end
    end
    if(soma==x) then
        puts(x.to_s+" eh perfeito")
    else
        puts(x.to_s+" nao eh perfeito")
    end
end