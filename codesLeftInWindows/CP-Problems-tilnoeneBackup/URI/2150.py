while True:
    try:
        vog = input()
        frase = input()
        
        let = {}
        
        for i in range(256):
            let[chr(i)] = False
        
        for i in vog:
            let[i] = True
        
        tot = 0
        for i in frase:
            if(let[i]): tot += 1
        
        print(tot)
        
    except:
        break