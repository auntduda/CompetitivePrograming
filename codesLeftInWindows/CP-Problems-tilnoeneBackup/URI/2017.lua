orit = io.read()
k = tonumber(io.read())

ori = {}
orit:gsub(".",function(c) table.insert(ori,c) end)

ig = 0
pos = 0

for i=1,5 do
    ft = io.read()
    temp = 0
    
    f = {}
    ft:gsub(".",function(c) table.insert(f,c) end)
    
    for j=1,string.len(orit) do
        if(f[j] == ori[j]) then
            temp = temp + 1
        end
    end
    
    if(temp > ig) then
        ig = temp
        pos = i
    end
    
end

if(string.len(orit) - ig > k) then print(-1)
else
    print(pos);
    print(string.len(orit) - ig)
end
