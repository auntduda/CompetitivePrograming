n = io.read("*number")
vin=0
vout=0
    
for i=1,n,1 do
    v = io.read("*number")
    if(v>=10 and v<=20) then
        vin=vin+1
    else
        vout=vout+1
    end
end

print(string.format("%d in", vin))
print(string.format("%d out", vout))