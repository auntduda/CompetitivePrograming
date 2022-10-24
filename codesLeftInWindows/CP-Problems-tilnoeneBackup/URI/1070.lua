n = io.read("*number")

if n%2==0 then
    n=n+1
end

for i=n,n+11,2 do print(i) end