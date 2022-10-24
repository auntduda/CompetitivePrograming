n=0
soma=0.0
while(true) do
    idade = io.read("*number")
    if(idade<0) then
        break
    end
    soma=soma+idade
    n=n+1
end
print(string.format("%.2f", soma/n))

