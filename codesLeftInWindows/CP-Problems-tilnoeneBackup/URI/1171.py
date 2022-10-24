n = int(input())

dic = {}

for i in range(2001):
    dic[i] = 0

for i in range(n):
    k = int(input())
    dic[k] += 1
    
for i in range(2001):
    if(dic[i] > 0):
        print("{} aparece {} vez(es)".format(i, dic[i]))