n = []
while True:
    try:
        k = input().split(' ')
        val = int(k[0])
        q = int(k[1])
        for i in range(val): n.append(int(input()))
        n = sorted(n, reverse=True)
        for i in range(q):
            vl = int(input())
            print(n[vl-1])

    except:
        break
