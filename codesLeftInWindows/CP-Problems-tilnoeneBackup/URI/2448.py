ls = [int(i) for i in input().split()]

n = ls[0]
m = ls[1]

casas = {}

ls = [int(i) for i in input().split()]
for i in range(n):
    casas[ls[i]] = i

ls = [int(i) for i in input().split()]

atual = ans = 0
for i in range(m):
    ans += abs(atual - casas[ls[i]])
    atual = casas[ls[i]]
    
print(ans)