ori = input()
k = int(input())

dif = []

for i in range(5):
    f = input()
    temp = 0
    
    for j in range(len(f)):
        if(f[j] == ori[j]):
            temp += 1
    
    dif.append(temp)

maior = 0

for i in range(5):
    if(dif[i] > maior):
        maior = dif[i]

if((len(ori) - maior) > k):
    print(-1)
else:
    for i in range(5):
        if(dif[i] == maior):
            print(i+1)
            print(len(ori) - maior)
            break