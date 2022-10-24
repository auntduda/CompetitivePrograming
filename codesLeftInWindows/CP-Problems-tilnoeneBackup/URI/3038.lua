while true do
    linha = io.read()
    if linha == nil then break end
    res = ""
    
    frase = {}
    linha:gsub(".", function(c) table.insert(frase, c) end)
    
    for i=1, string.len(linha) do
        if(frase[i] == '@') then res = res .. "a"
        elseif(frase[i] == '&') then res = res .. "e"
        elseif(frase[i] == '!') then res = res .. "i"
        elseif(frase[i] == '*') then res = res .. "o"
        elseif(frase[i] == '#') then res = res .. "u"
        else res = res .. frase[i] end
    end
    
    print(res)
    
end