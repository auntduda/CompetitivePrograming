a = io.read("*number")
b = io.read("*number")
c = io.read("*number")
d = io.read("*number")

if b>c and d>a and c+d>a+b and c>0 and d>0 and a%2==0 then
    print("Valores aceitos")
else
    print("Valores nao aceitos")
end