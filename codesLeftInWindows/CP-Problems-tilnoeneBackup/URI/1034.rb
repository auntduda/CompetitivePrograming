alc=0
gas=0
die=0

while(true) do
    e = gets.to_i
    if(e==4) then
        break
    elsif(e==1)
        alc+=1
    elsif(e==2)
        gas+=1
    elsif(e==3)
        die+=1
    end
end
puts("MUITO OBRIGADO")
puts("Alcool: #{alc}")
puts("Gasolina: #{gas}")
puts("Diesel: #{die}")