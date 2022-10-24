pos = 1
n = io.read("*number")
menor = io.read("*number")
for i=2,n do
    v = io.read("*number")
    if(v<menor) then
        menor = v
        pos = i
    end
end

print("Menor valor: "..menor);
print("Posicao: "..pos-1);