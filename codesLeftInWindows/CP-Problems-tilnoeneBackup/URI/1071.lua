soma=0
x = io.read("*number")
y = io.read("*number")

if(x>y) then
    temp=x
    x=y
    y=temp
end

if(x%2==0) then
    x=x+1
else
    x=x+2
end

for i=x,y-1,2 do
    soma=soma+i
end

print(soma)
