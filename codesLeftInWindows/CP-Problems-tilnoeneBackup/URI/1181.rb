n = gets.to_i
e = gets.chomp()
soma=0.0
for i in 0..11 do
    for j in 0..11 do
        valor = gets.to_f
        if i==n then soma+=valor end
    end
end
if e=='S' then puts(soma)
else puts "%0.01f" % (soma/12) end