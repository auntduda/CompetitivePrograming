while True:
    n = int(input())
    if n == 0: break;
    
    maria = joao = 0
    
    v = input().split()
    
    for i in range(n):
        k = int(v[i])
        if(k == 0): maria += 1
        else: joao += 1
        
    print("Mary won {} times and John won {} times".format(maria, joao))