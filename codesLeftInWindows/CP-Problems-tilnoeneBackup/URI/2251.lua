i = 1

while true do
    n = io.read("*number")
    if n == 0 then break end
    
    
    print("Teste "..i)
    print(string.format("%.0f", math.pow(2, n)-1))
    print()
    
    i = i + 1
end