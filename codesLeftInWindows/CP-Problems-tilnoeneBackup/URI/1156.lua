b=2.0
soma=1.0
a=3.0
while(a<=39) do
    c=a/b
    soma=soma+c
    b=b*2
    a=a+2
end
print(string.format("%.2f", soma))
