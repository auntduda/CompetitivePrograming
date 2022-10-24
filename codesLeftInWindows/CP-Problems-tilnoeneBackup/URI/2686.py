while True:
    try:
        m = float(input())
        
        if(m>=90 and m<180): print("Boa Tarde!!")
        elif(m>=180 and m<270): print("Boa Noite!!")
        elif(m>=270 and m<360): print("De Madrugada!!")
        else: print("Bom Dia!!")
        
        total = 240*m+21600
        h = total/3600
        
        if(h>=24): h-=24
        m = (total%3600)/60
        s = (total%3600)%60
        
        if(h < 10): print("0", end = '')
        print(int(h), end = ':')
        if(m < 10): print("0", end = '')
        print(int(m), end = ':')
        if(s < 10): print("0", end = '')
        print(int(s))
        
    except:
        break