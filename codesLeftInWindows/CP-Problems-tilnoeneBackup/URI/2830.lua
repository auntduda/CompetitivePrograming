
    a = io.read("*number")
    b = io.read("*number")

    if((a <= 8 and b >= 9) or (b <= 8 and a >= 9)) then
        print("final")
    elseif((a % 2 == 0 and b == a-1) or (b % 2 == 0 and a == b-1)) then
        print("oitavas")
    elseif((a <= 12 and b >= 13) or (a >= 13 and b <= 12) or (a <= 4 and b >= 5) or (a >= 5 and b <= 4)) then
        print("semifinal")
    else
        print("quartas")
    end
