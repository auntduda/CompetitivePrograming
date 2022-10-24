n = [int(i) for i in input().split()]
a = n[0]
b = n[1]
c = n[2]

m = (a+b+abs(a-b))//2

print("{} eh o maior".format((m+c+abs(m-c))//2))