soma=0
i=0
x = io.read("*number")
while(true) do
    z = io.read("*number")
    if(z>x) then
        break
    end
end
while(soma<z) do
    soma=soma+i+x
    i=i+1
end
print(i)
