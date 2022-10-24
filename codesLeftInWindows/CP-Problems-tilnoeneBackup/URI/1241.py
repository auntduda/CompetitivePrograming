n = int(input())

for i in range(n):
    a = input().split(' ')
    if(a[0][len(a[0])-len(a[1]):]==a[1]):
        print('encaixa')
    else:
        print('nao encaixa')