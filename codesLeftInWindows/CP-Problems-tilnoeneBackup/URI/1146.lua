while(true) do
    n = io.read("*number")
    res = ""
    if(n==0) then
        break
    end
    for i=1,n-1,1 do
        res=res..i.." "
    end
    res=res..n
    print(res)
end
