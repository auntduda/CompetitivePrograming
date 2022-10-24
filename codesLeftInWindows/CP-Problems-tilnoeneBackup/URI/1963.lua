a = io.read("*number")
b = io.read("*number")

print(string.format("%.2f%%", (b*100)/a-100))