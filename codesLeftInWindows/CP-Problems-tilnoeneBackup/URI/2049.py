k = 1

while True:
    a = input()
    
    if(a == "0"):
        break
    
    b = input()
    
    if(k != 1):
        print()
    
    print('Instancia {}'.format(k))
    
    if(a in b):
        print('verdadeira')
    else:
        print('falsa')
    
    k += 1