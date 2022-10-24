
a = gets.to_i
b = gets.to_i
    
    if((a <= 8 and b >= 9) or (b <= 8 and a >= 9)) then
        puts("final")
    elsif((a % 2 == 0 and b == a-1) or (b % 2 == 0 and a == b-1)) then
        puts("oitavas")
    elsif((a <= 12 and b >= 13) or (a >= 13 and b <= 12) or (a <= 4 and b >= 5) or (a >= 5 and b <= 4)) then
        puts("semifinal")
    else
        puts("quartas")
    end