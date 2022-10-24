while True:
    k = input().split()
    if k[0]=='0': break
    res = ""
    for i in k[1]:
        if i!=k[0]: res+=i
    if len(res)==0: print(0)
    else: print(int(res))