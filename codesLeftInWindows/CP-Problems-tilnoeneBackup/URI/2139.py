while True:
    try:
        n = [int(i) for i in input().split(' ')]
        if(n[0]==12 and n[1]>25):
            print("Ja passou!")
        elif(n[0]==12 and n[1]==24):
            print("E vespera de natal!")
        elif(n[0]==12 and n[1]==25):
            print("E natal!")
        else:
            if(n[0]>2):
                n[1]+=29
            if(n[0]>1):
                n[1]+=31
            if(n[0]>3):
                n[1]+=31
            if(n[0]>4):
                n[1]+=30
            if(n[0]>5):
                n[1]+=31
            if(n[0]>6):
                n[1]+=30
            if(n[0]>7):
                n[1]+=31
            if(n[0]>8):
                n[1]+=31
            if(n[0]>9):
                n[1]+=30
            if(n[0]>10):
                n[1]+=31
            if(n[0]>11):
                n[1]+=30

            print("Faltam {} dias para o natal!".format(360-n[1]))
    
    except:
        break