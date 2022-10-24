n = int(input())

for i in range(n):
    ali = {}
    
    a = input()
    b = input()
    c = input()
    
    b += c
    
    cheater = False
    for let in b:
        if let not in a:
            cheater = True
            break
        else:
            a = a.replace(let, '')
    
    a = ''.join(sorted(list(a)))
    
    if cheater:
        print('CHEATER')
    else: 
        print(a)