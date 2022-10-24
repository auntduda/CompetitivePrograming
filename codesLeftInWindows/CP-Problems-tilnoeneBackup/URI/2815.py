frase = input()

res = ""
i = 0
while(i < len(frase)-2):
    if(frase[i] == frase[i+2] and frase[i+1] == frase[i+3]):
        res += frase[i] + frase[i+1]
        i += 3
    else:
        res += frase[i]
    
    i += 1
        
print(res+frase[-2:])