def strbin(num):
    res = 0
    pot = 0
    for i in range(len(num)-1, -1, -1):
        res += 2**pot * int(num[i])
        pot += 1
    
    return res

while True:
    n = str(bin(int(input())))
    
    letras32 = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'];
    
    it = 1
    grupo = []
    bit = ""
    res = ""
    
    for i in range(len(n)-1, 1, -1):
        bit = n[i] + bit
        
        if(it == 5 or i == 2):
            grupo.append(bit)
            bit = "" 
            it = 0
        it += 1
    
    for i in range(len(grupo)-1, -1, -1):
        res += str(letras32[strbin(grupo[i])])
    
    print(res)
    if(n == "0b0"): break