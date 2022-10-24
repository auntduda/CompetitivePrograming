cel = {'0': 0, '1': 1, '7': 7, '8': 8, '9': 9, 'P': 7, 'Q': 7, 'R': 7, 'S': 7, 'T': 8, 'U': 8, 'V': 8, 'W': 9, 'X': 9, 'Y': 9, 'Z': 9}

atual = 2
c = 1
for i in range(65, 65+16):
    cel[chr(i)] = atual
    c += 1
    if c == 4:
        c = 1
        atual += 1

while True:
    try:
        s = input()
        
        for letra in s:
            
            if letra == '*' or letra == '#':
                print(letra, end='')
            elif letra.isalpha():
                print(cel[letra.upper()], end='')
            elif letra.isnumeric():
                print(letra, end='')
            
        print()
    except:
        break