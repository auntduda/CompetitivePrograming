nome = io.read()
a = io.read("*number")
b = io.read("*number")

print(string.format("TOTAL = R$ %.2f", a+0.15*b))