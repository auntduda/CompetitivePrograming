n = {}
for i=0,19 do
    n[i] = io.read("*number")
end
for i=0,19 do
    print("N["..i.."] = "..n[19-i])
end