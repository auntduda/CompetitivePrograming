n = int(input())

fim = n
if(n%2!=0): fim=n-1
for i in range(2, n+1, 2): print("{}^2 = {}".format(i, i*i))