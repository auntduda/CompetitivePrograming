n=0
positivos=0

for i in range(0, 6):
    valor = float(input())
    if(valor>0):
        positivos+=1
        n+=valor

print("{} valores positivos\n{:.1f}".format(positivos, n/positivos))