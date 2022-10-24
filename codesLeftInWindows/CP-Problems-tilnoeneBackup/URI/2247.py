k = 1
while True:
    n = int(input())
    if n == 0: break

    print("Teste {}".format(k))
    a = b = resto = 0
    
    for i in range(n):
        v1, v2 = input().split()
        
        a += int(v1)
        b += int(v2)
        print(a-b)
    print()
    
    k += 1