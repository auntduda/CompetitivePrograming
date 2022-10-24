n = io.read("*number")
print(string.format("%d:%d:%d", math.floor(n/3600), math.floor((n%3600)/60), (n%3600)%60))