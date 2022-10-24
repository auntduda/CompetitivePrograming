while True:
    try:
        txt = (input().replace("O", "0").replace("o", "0").replace("l", "1").replace(",", " ")).split()
        k="".join(txt)
        try:
            k=int(k)
            if(k>2147483647):
                print("error")
            else:
                print(k)
        except:
            print("error")
    except:
        break