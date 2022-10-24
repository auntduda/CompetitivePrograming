while(true) do
    n = io.read("*number")
    m = io.read("*number")
    res = ""
    if(m<=0 or n<=0) then
        break
    end
    if(m>n) then
        temp=n
        n=m
        m=temp
    end
    soma=0
    for i=m,n,1 do
        soma=soma+i
        res=res..i.." "
    end
    print(res.."Sum="..soma)
end