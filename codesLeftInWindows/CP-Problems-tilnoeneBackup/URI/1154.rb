n=0
soma=0.0
while(true) do
    idade = gets.to_i
    if(idade<0) then
        break
    end
    soma+=idade
    n+=1
end
puts "%0.02f" % (soma/n).round(2)
