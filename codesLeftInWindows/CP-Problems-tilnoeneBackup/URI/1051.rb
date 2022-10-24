renda = gets.to_f

if(renda<=2000)
    puts "Isento"
else
    if(renda<=3000)
        puts "R$ %0.02f" % ((8*(renda-2000))/100).round(2)
    else
        if(renda<=4500)
            puts "R$ %0.02f" % ((18*(renda-3000))/100+80).round(2)
        else
            puts "R$ %0.02f" % ((28*(renda-4500))/100+270+80).round(2)
        end
    end
end