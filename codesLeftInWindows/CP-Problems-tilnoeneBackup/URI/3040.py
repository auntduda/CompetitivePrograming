n = int(input())

for i in range(0, n):
    ns = input().split()
    a = int(ns[0])  
    b = int(ns[1])
    c = int(ns[2])
    if(a>=200 and a<=300 and b>=50 and c>=150):
        print("Sim")
    else:
        print("Nao")