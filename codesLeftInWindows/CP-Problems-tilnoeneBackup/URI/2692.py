l = [int(i) for i in input().split()]
n = l[0]
m = l[1]

dic = {}

for i in range(0, 256):
    dic[chr(i)] = chr(i)

for i in range(n):
    l = input().split()
    
    dic[(l[0])] = (l[1])
    dic[(l[1])] = (l[0])

for i in range(m):
    frase = input()
    
    for i in frase:
        print(dic[i], end = '')
        
    print()
