n = gets.to_i
for i in 1..n do
    maria = 0
    joao = 0
    for j in 1..3 do
        ls = gets.chomp().split(' ')
        x = ls[0].to_i
        d = ls[1].to_i
        joao=joao+x*d
    end
    for j in 4..6 do
        ls = gets.chomp().split(' ')
        x = ls[0].to_i
        d = ls[1].to_i
        maria=maria+x*d
    end
    if(joao>maria) then
        puts("JOAO")
    else
        puts("MARIA")
    end
end