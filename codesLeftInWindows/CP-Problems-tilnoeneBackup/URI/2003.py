while True:
    try:
        n = [int(i) for i in input().split(':')]
        if(n[0]<7):
            print('Atraso maximo: 0')
        else:
            for i in range(7, n[0]):
                n[1]+=60

            print('Atraso maximo:', n[1])

    except:
        break