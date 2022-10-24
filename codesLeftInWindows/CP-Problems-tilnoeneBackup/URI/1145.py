s = input().split()
x = int(s[0])
y = int(s[1])
res = ""

for i in range(1, y+1):
    res+=str(i)
    if(i%x==0 or i==y):
        print(res)
        res=""
    else:
        res+=" "
