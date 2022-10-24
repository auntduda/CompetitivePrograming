n = io.read("*number")
print(math.floor(n/365) .. " ano(s)\n" .. math.floor((n%365)/30) .. " mes(es)\n" .. math.floor((n%365)%30) .. " dia(s)")