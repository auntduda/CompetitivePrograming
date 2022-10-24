n = gets.to_i;
h = m = 0;
for i in 0..n-1 do
    sexo = gets.chomp;
    if sexo[sexo.length-1]=="F"
        m+=1;
    else
        h+=1;
    end
end
print h, " carrinhos\n", m, " bonecas\n";