n = int(input())

for i in range(n):        
    palavra = input()
    c = int(input())
    
    for j in range(len(palavra)):
        if(ord(palavra[j]) - ord(chr(c)) < 65):
            print(chr(26+ord(palavra[j])-c), end='')
        else:
            print(chr(ord(palavra[j])-ord(chr(c))), end='')
            
    print()