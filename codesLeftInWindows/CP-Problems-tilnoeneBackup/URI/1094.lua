n = io.read("*number")
s=0
r=0
c=0

for i=1,n,1 do
    v = io.read("*number")
    animal = io.read()

    if(animal==' C') then
        c=c+v;
    elseif(animal==' R') then
        r=r+v;
    else
        s=s+v;
    end
end
soma = c+r+s

print(string.format("Total: %d cobaias", c+r+s));
print(string.format("Total de coelhos: %d", c));
print(string.format("Total de ratos: %d", r));
print(string.format("Total de sapos: %d", s));
print(string.format("Percentual de coelhos: %.2f %%", (100*c)/soma));
print(string.format("Percentual de ratos: %.2f %%", (100*r)/soma));
print(string.format("Percentual de sapos: %.2f %%", (100*s)/soma));