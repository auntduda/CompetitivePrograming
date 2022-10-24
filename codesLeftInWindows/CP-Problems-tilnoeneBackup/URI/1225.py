n = int(input())

for i in range(n):
    frase = input()
    letras = []
    for j in range(26):
        letras.append(0)
    for j in frase:
        if j.isalpha():
            letras[ord(j.lower())-97]+=1
    
    maior = max(letras)
    rep = letras.count(maior)

    for j in range(26):
        if(letras[j]==maior):
            print(chr(j+97), end='')
            rep-=1
        if(rep==0):
            print()
            break;