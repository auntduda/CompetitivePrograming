n = gets.to_i

soma = 0
for i in 1..n do
    linha = gets
    ls = linha.split(' ')
    
    e = ls[0]
    v = (ls[1]).to_i
    
    if(e == "G") then
        soma=soma-v
    else
        soma=soma+v
    end
end
        
if(soma >= 0) then
    puts("A greve vai parar.")
else
    puts("NAO VAI TER CORTE, VAI TER LUTA!")
end
