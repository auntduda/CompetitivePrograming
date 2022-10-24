n = gets.to_i

for i in 1..n do
    ns = gets.chomp().split(' ')
    a = ns[0].to_i   
    b = ns[1].to_i
    c = ns[2].to_i
    if(a>=200 and a<=300 and b>=50 and c>=150) then
        puts("Sim")
    else
        puts("Nao")
    end
end