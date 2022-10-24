while(true) do
    x = io.read("*number")
    y = io.read("*number")
    if(x==0 or y==0) then
        break
    end
    if(x>0) then
        if(y>0) then
    		print("primeiro")
        else
    		print("quarto")
        end
    else
        if(y>0) then
    		print("segundo")
        else
            print("terceiro")
        end
    end
end