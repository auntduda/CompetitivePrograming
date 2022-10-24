while True:
    try:
        ls = input().split()

        x = int(ls[0])
        y = int(ls[1])
        m = int(ls[2])

        for i in range(0, m):
            ls2 = input().split()
            a = int(ls2[0])
            b = int(ls2[1])
            if((a<=x and b<=y) or (b<=x and a<=y)): print("Sim")
            else: print("Nao")

    except:
        break
