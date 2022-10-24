n = io.read("*number")
h = 0
m = 0

function mysplit (inputstr, sep)
    if sep == nil then
            sep = "%s"
    end
    local t={}
    for str in string.gmatch(inputstr, "([^"..sep.."]+)") do
            table.insert(t, str)
    end
    return t
end

sexo = io.read()
for i=1,n,1 do
    sexo = io.read()
    if mysplit(sexo, " ")[2]=="F" then
        m=m+1
    else
        h=h+1
    end
end
print(h.." carrinhos\n"..m.." bonecas")
