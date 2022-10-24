alc=0
gas=0
die=0

while(true) do
    e = io.read("*number")
    if(e==4) then
        break
    elseif(e==1) then
        alc=alc+1
    elseif(e==2) then
        gas=gas+1
    elseif(e==3) then
        die=die+1
    end
end
print("MUITO OBRIGADO")
print("Alcool: "..alc)
print("Gasolina: "..gas)
print("Diesel: "..die)