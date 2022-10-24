n = io.read("*number")

fim = n
if(n%2~=0) then
    fim=n-1
end
    
for i=2,n,2 do
    print(string.format("%d^2 = %d", i, i*i))
end
