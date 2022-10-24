frase = "LIFE IS NOT A PROBLEM TO BE SOLVED"
str = {}

frase:gsub(".",function(c) table.insert(str,c) end)

n = io.read("*number")

ans = ""
for i=1,n do
    ans = ans..str[i]
end
print(ans)