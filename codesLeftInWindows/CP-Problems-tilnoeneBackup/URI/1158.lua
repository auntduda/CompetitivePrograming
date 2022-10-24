n = io.read("*number")

for i=1,n do
    x = io.read("*number")
    y = io.read("*number")
    if(x%2==0) then
        x=x+1
    end
    soma=0
    for j=1,y do
        soma=soma+x
        x=x+2
    end
    print(soma)
end