while(true) do
    n = io.read("*number")
    if(n==0) then
        break
    end
    if(n%2~=0) then
        n=n+1
    end
    soma=0
    for i=1,5 do
        soma=soma+n
        n=n+2
    end
    print(soma)
end