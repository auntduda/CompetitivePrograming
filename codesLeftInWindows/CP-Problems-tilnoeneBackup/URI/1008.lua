a = io.read("*number")
b = io.read("*number")
c = io.read("*number")

print("NUMBER = " .. a)
print(string.format("SALARY = U$ %.2f", b*c))