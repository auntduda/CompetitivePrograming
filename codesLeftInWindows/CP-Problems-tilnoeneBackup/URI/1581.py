n = int(input())

for i in range(n):
    k = int(input())
    
    idiomas = []
    dif = False
    
    for j in range(k):
        idiomas.append(input())
        if j > 0:
            if idiomas[j] != idiomas[j-1]:
                dif = True
                
    if dif:
        print('ingles')
    else:
        print(idiomas[0])