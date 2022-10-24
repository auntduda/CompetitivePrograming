a = io.read("*number")
b = io.read("*number")

if a==1 then
    print(string.format("Total: R$ %.2f", b*4))
elseif a==2 then
    print(string.format("Total: R$ %.2f", b*4.5))
elseif a==3 then
    print(string.format("Total: R$ %.2f", b*5))
elseif a==4 then
    print(string.format("Total: R$ %.2f", b*2))
else
    print(string.format("Total: R$ %.2f", b*1.5))
end