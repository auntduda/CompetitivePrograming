soma=0
l = gets.to_i
escolha = gets.to_s
for i in 0..11 do
    for j in 0..11 do
        valor = gets.to_f
        if(j==l) then
            soma=soma+valor
        end
    end
end
    
if(escolha=="S") then
    puts "%0.01f" % soma.round(1)
else
    puts "%0.01f" % (soma/12).round(1)
end