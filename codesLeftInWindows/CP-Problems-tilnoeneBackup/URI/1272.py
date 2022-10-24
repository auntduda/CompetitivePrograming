n = int(input())
for i in range(n):
    s = input().split(' ')
    for i in range(len(s)):
        if(len(s[i])>0):
            print(s[i][0], end='')
    print()
    