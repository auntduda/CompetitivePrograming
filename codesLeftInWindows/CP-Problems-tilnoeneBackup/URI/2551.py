while True:
    try:
        n = int(input())
        maior = 0
        
        for i in range(n):
            k = input().split()
            t = int(k[0])
            d = int(k[1])
            
            vm = d/t
            if vm > maior:
                maior = vm
                print(i+1)
        
    except:
        break