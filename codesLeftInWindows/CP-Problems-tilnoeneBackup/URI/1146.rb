while(true) do
    n = gets.to_i
    res = ""
    if(n==0) then
        break
    end
    for i in 1..n-1 do
        res=res+i.to_s+" "
    end
    res=res+n.to_s
    puts(res)
end
