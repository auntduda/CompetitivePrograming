while(True):
    ns = input().split(' ')
    x = int(ns[0])
    y = int(ns[1])
    if(x==y):
        break
    if(x>y):
        print("Decrescente")
    else:
        print("Crescente")