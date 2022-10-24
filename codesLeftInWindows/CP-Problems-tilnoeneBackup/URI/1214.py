c = int(input())
for i in range(c):
    n = [int(i) for i in input().split(' ')]
    soma=0
    acima=0
    for j in range(1, n[0]+1):
        soma+=n[j]
    media=soma/n[0]
    for j in range(1, n[0]+1):
        if(n[j]>media):
            acima+=1
    print("%.3f" % ((acima*100)/n[0])+"%")