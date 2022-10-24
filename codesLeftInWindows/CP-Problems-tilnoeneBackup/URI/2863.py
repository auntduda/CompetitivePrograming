while(True):
    try:
        n = int(input())
        maior = float(input())
        for i in range(1, n):
            k = float(input())
            if k<maior: maior=k
        print(maior)
    except:
        break
            