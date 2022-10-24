renda = io.read("*number")

if(renda<=2000) then
    print("Isento")
else
    if(renda<=3000) then
        print(string.format("R$ %.2f", ((8*(renda-2000))/100)))
    else
        if(renda<=4500) then
            print(string.format("R$ %.2f", ((18*(renda-3000))/100+80)))
        else
            print(string.format("R$ %.2f", ((28*(renda-4500))/100+270+80)))
        end
    end
end