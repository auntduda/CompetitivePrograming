x = io.read("*number")
y = io.read("*number")
res = ""

for i=1,y,1 do
    res=res..tostring(i)
    if(i%x==0 or i==y) then
        print(res)
        res=""
    else
        res=res.." "
    end
end
