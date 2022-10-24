k = [int(i) for i in input().split()]

a = k[0]
b = k[1]

if(b >= 0 and b <= 2): print("nova")
elif(b >= 97 and b <= 100): print("cheia")
else:
    if(a > b): print("minguante")
    else: print("crescente")