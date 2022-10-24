notas = {"W": 1, "H": 1/2, "Q": 1/4, "E": 1/8, "S": 1/16, "T": 1/32, "X": 1/64}

while True:
    linha = input().split('/')
    
    if linha[0] == "*":
        break
    
    ans = 0
    for i in linha:
        temp = 0
        
        for j in i:
            temp += notas[j]
            
        if(temp == 1): 
            ans+= 1
        
    print(ans)