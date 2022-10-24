while(true) do
    x = io.read("*number")
    y = io.read("*number")
    if(x==y) then
        break
    end
    if(x>y) then
        print("Decrescente")
    else
        print("Crescente")
    end
end