while True:
    l = [int(i) for i in input().split()]
    n = l[0]
    k = l[1]
        
    if n == k == 0: break

    perg = []
    for i in range(110):
        perg.append(0)
        
    freq = 0
    
    v = [int(i) for i in input().split()]
    for i in v:
        perg[i] += 1
    
    for i in range(1, 101):
        if perg[i] >= k: freq += 1
    
    print(freq)