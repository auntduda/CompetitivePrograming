soma=0
l = io.read("*number")
carro = io.read()
escolha = io.read()
for i=0,11 do
    for j=0,11 do
        valor = io.read("*number")
        if(j==l) then
            soma=soma+valor
        end
    end
end
    
if(escolha=="S") then
    print(string.format("%.1f", (soma)));
else
    print(string.format("%.1f", (soma/12)));
end