letra = input().split()[0]
frase = input().split()

lc = 0
for i in frase:
    if letra in i: lc += 1

print("{:.1f}".format((lc*100)/len(frase)))