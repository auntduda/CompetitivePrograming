import math

while True:
    try:
        n = int(input())
        
        ini = 0
        existe = False
        
        if(n >= 0):
            fim = int(math.sqrt(n))
            
            while fim >= ini:
                temp = ini**2 + fim**2
                
                if temp == n:
                    existe = True
                    break
                elif temp < n:
                    ini += 1
                else:
                    fim -= 1
           
        if existe: print("YES")
        else: print("NO")
        
    except:
        break