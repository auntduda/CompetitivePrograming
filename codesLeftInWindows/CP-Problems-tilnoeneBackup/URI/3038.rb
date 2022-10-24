while frase = gets
    res = ""
    
    for i in 0..(frase.length-1) do
        if(frase[i] == '@') then res = res + "a"
        elsif(frase[i] == '&') then res = res + "e"
        elsif(frase[i] == '!') then res = res + "i"
        elsif(frase[i] == '*') then res = res + "o"
        elsif(frase[i] == '#') then res = res + "u"
        else res = res + frase[i] end
    end
    
    puts(res)
end