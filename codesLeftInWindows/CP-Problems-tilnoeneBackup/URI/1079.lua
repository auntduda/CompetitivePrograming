n = io.read("*number")
   
for i=1,n,1 do
    a = io.read("*number")
    b = io.read("*number")
    c = io.read("*number")
    print(string.format("%.1f", (a*2+b*3+c*5)/10))
end