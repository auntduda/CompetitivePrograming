n = int(input())

for i in range(n):
    p = input()

    a = b = 0
    it = 1
    
    while(p[it] == 'a'):
        a += 1
        it += 1

    it += 3
    
    while(p[it] == 'a'):
        b += 1
        it += 1

    print('k', end = '')
    for j in range(a*b):
        print('a', end = '')
    print()
