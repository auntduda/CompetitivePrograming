while True:
    try:
        txt = input()
        v=0
        for i in txt:
            if i=='_':
                if v==0:
                    print('<i>', end='')
                    v=1
                else:
                    print('</i>', end='')
                    v=0
            elif i=='*':
                if v==0:
                    print('<b>', end='')
                    v=1
                else:
                    print('</b>', end='')
                    v=0
            else:
                print(i, end='')
            if(i==txt[-1]):
                print()
    except:
        break
