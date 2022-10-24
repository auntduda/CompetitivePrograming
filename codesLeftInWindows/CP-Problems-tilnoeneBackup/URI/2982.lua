function split(inputstr, sep)
    if sep == nil then
            sep = "%s"
    end
    local t={}
    for str in string.gmatch(inputstr, "([^"..sep.."]+)") do
            table.insert(t, str)
    end
    return t
end

soma = 0
n = io.read("*number")
lixo = io.read()

for i=1,n do
    linha = io.read()
    ls = split(linha)
    
    e = ls[1]
    v = tonumber(ls[2])
    
    if(e == "G") then
        soma=soma-v
    else
        soma=soma+v
    end
end
        
if(soma >= 0) then
    print("A greve vai parar.")
else
    print("NAO VAI TER CORTE, VAI TER LUTA!")
end
