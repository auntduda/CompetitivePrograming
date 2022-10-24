pos=0
neg=0
par=0
imp=0

for i=1,5,1 do
    a = io.read("*number")
    if(a>0) then
        pos=pos+1
    elseif(a<0) then
        neg=neg+1
    end
    if(a%2==0) then
        par=par+1
    else
        imp=imp+1
    end
end

print(string.format("%d valor(es) par(es)", par))
print(string.format("%d valor(es) impar(es)", imp))
print(string.format("%d valor(es) positivo(s)", pos))
print(string.format("%d valor(es) negativo(s)", neg))
