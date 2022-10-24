while True:
    n = int(input())
    if n == 0: break
    
    ls = [int(i) for i in input().split()]
    a = [0]
    
    for i in range(n):
        a.append(ls[i])
    
    ini = int(input())
    atual = ini
    
    while True:
        if atual == a[atual]:
            print(atual)
            break
    
        atual = a[atual]
    