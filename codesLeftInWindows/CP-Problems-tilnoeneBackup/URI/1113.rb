while(true) do
    ns = gets.chomp().split(' ')
    x = ns[0].to_i
    y = ns[1].to_i
    if(x==y) then
        break
    end
    if(x>y) then
        puts("Decrescente")
    else
        puts("Crescente")
    end
end
