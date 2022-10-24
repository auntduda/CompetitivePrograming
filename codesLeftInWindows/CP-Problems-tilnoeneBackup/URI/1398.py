def solve(n):
    it = 0
    
    for i in range(len(n)):
        it = it * 2 + int(n[i])
        it %= 131071
    
    if it == 0:
        return True
    return False

num = ""

while True:
    try:
        tmp = input()
        
        if(tmp[-1] == '#'):
            num += tmp[:-1]
            
            if(solve(num)):
                print('YES')
            else:
                print('NO')

            num = ""
            
        else:
            num += tmp
        
    except:
        break