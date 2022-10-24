n = int(input())

for j in range(n):
    frase = list(input())
    
    for i in range(1, len(frase) - 7):
        if(frase[i] == 'o' and frase[i+1] == 'u' and frase[i+2] == 'l' and frase[i+3] == 'u' and frase[i+4] == 'p' and frase[i+5] == 'u' and frase[i+6] == 'k' and frase[i+7] == 'k'):
            if(i >= 10):
                
                if(frase[i-1] != 'i' or frase[i-2] != 'k' or frase[i-3] != 'k' or frase[i-4] != 'u' or frase[i-5] != 'p' or frase[i-6] != 'u' or frase[i-7] != 'l' or frase[i-8] != 'u' or frase[i-9] != 'o' and frase[i-10] != 'J'):
                    frase[i-1] = 'J';
                    frase[i+8] = 'i';
                    
                    i += 7;
                    
                    
            else:
                frase[i-1] = 'J'
                frase[i+8] = 'i'
                    
                i += 7
                
    print(''.join(frase))