soma=0
a = io.read("*number")
n = io.read("*number")
while(n<=0) do
    n = io.read("*number")
end
for i=0,n-1,1 do
    soma=soma+a+i
end
print(soma)