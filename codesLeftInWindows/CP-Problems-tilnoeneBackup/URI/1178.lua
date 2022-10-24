n = io.read("*number")

for i=0,99 do
    print(string.format("N[%d] = %.4f", i, n))
    n = n/2
end