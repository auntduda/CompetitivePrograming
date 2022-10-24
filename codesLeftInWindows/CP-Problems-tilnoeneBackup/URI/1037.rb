n = gets.to_f

if n>=0 && n<=25
    print("Intervalo [0,25]\n")
elsif n>25 && n<=50
    print("Intervalo (25,50]\n")
elsif n>50 && n<=75
    print("Intervalo (50,75]\n")
elsif n>75 && n<=100
    print("Intervalo (75,100]\n")
else
    print("Fora de intervalo\n")
end