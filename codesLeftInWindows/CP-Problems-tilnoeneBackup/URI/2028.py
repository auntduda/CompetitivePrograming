caso = 1
while True:
    try:
        n = int(input())
        
        num = 1
        res = "0"
        if n != 0:
            res += " "
            for i in range(1, n+1):
                for j in range(0, i):
                    res += str(i)
                    
                    if(not (i == n and j == i-1)):
                        res += " "
                    num += 1
        
        
        print("Caso {}: {} numero".format(caso, num), end = '')
        if(num > 1):
            print("s", end = '')
        print()
        print(res)
        print()
        caso += 1
        
    except:
        break