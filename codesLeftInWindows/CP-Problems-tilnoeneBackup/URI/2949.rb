a=0
elf=0
h=0
m=0
x=0

n = gets.to_i
for i in 1..n do
    nome = gets.chomp()
    e = nome[-1]
    if(e=='A') then 
        a=a+1
    elsif(e=='E') then 
        elf=elf+1
    elsif(e=='H') then 
        h=h+1
    elsif(e=='M') then 
        m=m+1
    else 
        x=x+1
    end
end
puts("#{x} Hobbit(s)")
puts("#{h} Humano(s)")
puts("#{elf} Elfo(s)")
puts("#{a} Anao(s)")
puts("#{m} Mago(s)")
