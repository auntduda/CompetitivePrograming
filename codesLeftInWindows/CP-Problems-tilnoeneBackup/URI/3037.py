n = int(input())
for i in range(0, n):
    maria = 0
    joao = 0
    for j in range(0, 3):
        ls = input().split(' ')
        x = int(ls[0])
        d = int(ls[1])
        joao=joao+x*d
    
    for j in range(3, 6):
        ls = input().split(' ')
        x = int(ls[0])
        d = int(ls[1])
        maria=maria+x*d
    
    if(joao>maria):
        print("JOAO")
    else:
        print("MARIA")
    
