n = io.read("*number")

for i=1,10,1 do
    print(string.format("%d x %d = %d", i, n, i*n))
end