n = io.read("*number")
e = io.read()
e = io.read()
soma=0.0
for i=0,11 do
    for j=0,11 do
        valor = io.read("*number")
        if i==n then soma=soma+valor end
    end
end
if e=='S' then print(soma)
else print(string.format("%.1f", soma/12)) end
