while True:
    try:
        n = int(input())
        
        telefones = []
        for i in range(n):
            telefones.append(input())
        
        telefones.sort()
        
        m = len(telefones[0])
        ans = 0
        
        for lin in range(n-1):
            for col in range(m):
                if telefones[lin][col] == telefones[lin+1][col]:
                    ans += 1
                else:
                    break
        
        print(ans)
    except:
        break