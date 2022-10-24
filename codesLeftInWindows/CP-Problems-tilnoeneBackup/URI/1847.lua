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

linha = io.read()
ls = split(linha)

a = tonumber(ls[1])
b = tonumber(ls[2])
c = tonumber(ls[3])

if(a>b and b<=c) then feliz=true
elseif(b>a and c>b and c-b>=b-a) then feliz=true
elseif(a>b and b>c and b-c<a-b) then feliz=true
elseif(a==b and c>b) then feliz=true end
        
if(feliz) then print(":)")
else print(":(") end
