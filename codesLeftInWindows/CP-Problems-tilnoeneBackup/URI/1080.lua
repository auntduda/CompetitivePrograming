maior = io.read("*number")
pos=1
        
for i=2,100,1 do
    n = io.read("*number")
    if(n>maior) then
        maior=n
        pos=i
    end
end
        
print(maior)
print(pos)
