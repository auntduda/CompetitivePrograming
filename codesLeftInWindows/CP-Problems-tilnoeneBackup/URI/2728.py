while True:
    try:
        f = input().split('-')
        
        cobol = "COBOL"
        
        existe = True
        for i in range(5):
            if(f[i][0].upper() != cobol[i] and f[i][-1].upper() != cobol[i]):
                existe = False
        
        if(existe):
            print("GRACE HOPPER")
        else:
            print("BUG")
        
    except:
        break
    