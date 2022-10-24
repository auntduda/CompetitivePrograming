n = io.read("*number")
for i=1,n do
    x = io.read("*number")
    soma=0
    for j=1,x-1 do
        if(x%j==0) then
            soma=soma+j
        end
    end
    if(soma==x) then
        print(x.." eh perfeito")
    else
        print(x.." nao eh perfeito")
    end
end