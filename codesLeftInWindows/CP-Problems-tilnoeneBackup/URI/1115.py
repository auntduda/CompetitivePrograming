while(True):
    ns = input().split()
    x = int(ns[0])
    y = int(ns[1])

    if(x==0 or y==0): break
    if(x>0):
        if(y>0):
            print("primeiro")
        else:
            print("quarto")
    else:
        if(y>0):
            print("segundo")
        else:
            print("terceiro")