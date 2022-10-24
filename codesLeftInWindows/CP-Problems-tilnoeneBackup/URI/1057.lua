n = io.read("*number")
for i=1,n do
    if(n%i==0) then
        print(i)
    end
end