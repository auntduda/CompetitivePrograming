while True:
    try:
        ls = input().split()
        h = int(ls[0])//30
        m = int(ls[1])//6
        if(h<10):
            print("0", end='')
        print(str(h)+":", end='')
        if(m<10):
            print("0", end='')
        print(m)
    except:
        break