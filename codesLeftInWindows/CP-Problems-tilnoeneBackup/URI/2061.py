n = [int(i) for i in input().split(' ')]
for i in range(n[1]):
    acao = input()
    if acao=="fechou":
        n[0]+=1
    else:
        n[0]-=1
print(n[0])