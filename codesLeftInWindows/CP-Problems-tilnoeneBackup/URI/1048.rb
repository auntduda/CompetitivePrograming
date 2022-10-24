def escreve(salario, porcentagem)
    puts "Novo salario: %0.02f" % ((salario*(100+porcentagem))/100)
    puts "Reajuste ganho: %0.02f" % ((porcentagem*salario)/100)
end

def main()
    salario = gets.to_f
    if(salario<=400)
        escreve(salario, 15)
        puts "Em percentual: 15 %"
    elsif(salario<=800)
        escreve(salario, 12)
        puts "Em percentual: 12 %"
    elsif(salario<=1200)
        escreve(salario, 10)
        puts "Em percentual: 10 %"
    elsif(salario<=2000)
        escreve(salario, 7)
        puts "Em percentual: 7 %"
    else
        escreve(salario, 4)
        puts "Em percentual: 4 %"
    end
        
    return 0
end

main()