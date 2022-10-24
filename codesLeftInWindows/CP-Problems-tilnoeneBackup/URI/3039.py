n = int(input())
h = m = 0
for i in range(n):
    l = input().split(' ')
    if(l[1]=='F'): m+=1
    else: h+=1
print("{} carrinhos\n{} bonecas".format(h, m))