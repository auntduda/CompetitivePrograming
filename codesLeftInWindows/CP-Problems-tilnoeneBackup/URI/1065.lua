pares=0

for i=1,5,1 do
    num = io.read("*number")
    if(num%2==0) then
        pares=pares+1
    end
end

print(string.format("%d valores pares", pares))