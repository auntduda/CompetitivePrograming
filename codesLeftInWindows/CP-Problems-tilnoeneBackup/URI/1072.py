n = int(input())
vin=0
vout=0
    
for i in range(0, n):
    v = int(input())
    if(v>=10 and v<=20):
        vin=vin+1
    else:
        vout=vout+1

print("{} in".format(vin))
print("{} out".format(vout))