res = 0

for i=0,5,1 do
    n = io.read("*number")
    if n>0 then
        res=res+1
    end
end

print(string.format("%d valores positivos", res))