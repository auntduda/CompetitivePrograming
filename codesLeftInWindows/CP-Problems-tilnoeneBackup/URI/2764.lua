k = io.read("*line")

a = {}
k:gsub(".",function(c) table.insert(a,c) end)

print(a[4]..a[5]..'/'..a[1]..a[2]..'/'..a[7]..a[8])
print(a[7]..a[8]..'/'..a[4]..a[5]..'/'..a[1]..a[2])
print(a[1]..a[2]..'-'..a[4]..a[5]..'-'..a[7]..a[8])
