n = io.read("*number")

for i=1,n,1 do
    x = io.read("*number")
    y = io.read("*number")
    if y==0 then
        print("divisao impossivel")
    else
        print(string.format("%0.01f", (x/y))) 
    end
end