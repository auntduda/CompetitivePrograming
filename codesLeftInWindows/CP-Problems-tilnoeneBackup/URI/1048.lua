function escreve(salario, porcentagem)
    print(string.format("Novo salario: %.2f", ((salario*(100+porcentagem))/100)))
    print(string.format("Reajuste ganho: %.2f", ((porcentagem*salario)/100)))
end

function main()
    salario = io.read("*number")
    if(salario<=400) then
        escreve(salario, 15)
        print("Em percentual: 15 %")
    elseif(salario<=800) then
        escreve(salario, 12)
        print("Em percentual: 12 %")
    elseif(salario<=1200) then
        escreve(salario, 10)
        print("Em percentual: 10 %")
    elseif(salario<=2000) then
        escreve(salario, 7)
        print("Em percentual: 7 %")
    else
        escreve(salario, 4)
        print("Em percentual: 4 %")
    end
        
    return 0
end

main()