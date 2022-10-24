while(true) do
    a = io.read("*number")
    if(a==0) then
        break
    end
    b = io.read("*number")
    c = io.read("*number")
    print(string.format("%.0f", math.floor(math.sqrt((a*b)*(100.0/c)))))
end
