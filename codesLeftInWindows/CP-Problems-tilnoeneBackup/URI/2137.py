while(True):
    try:
        n = int(input())
        s = []
        for i in range(n):
            s.append(input())
        s = sorted(s)
        for i in s:
            print(i)
    except:
        break
        