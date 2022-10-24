t = gets.to_i
for i in 1..t do
    ns = gets.chomp().split(' ')
    pa = ns[0].to_i
    pb = ns[1].to_i
    g1 = ns[2].to_f
    g2 = ns[3].to_f
    anos=0
    while(true) do
        if(anos>100 or pa>pb) then
            break
        end
        pa=pa+(pa*g1/100).floor
        pb=pb+(pb*g2/100).floor
        anos=anos+1
    end
    if(anos>100) then
        puts("Mais de 1 seculo.")
    else
        puts("#{anos} anos.")
    end
end