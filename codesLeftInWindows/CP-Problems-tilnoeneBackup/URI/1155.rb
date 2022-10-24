soma=0
for i in 1..100 do
    divisao=1.0/i
    soma=soma+divisao
end
puts "%0.02f" % (soma).round(2)
