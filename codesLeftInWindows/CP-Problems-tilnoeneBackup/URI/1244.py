n = int(input())

for i in range(n):
    pal = input().split()
    
    pal.sort(reverse=True, key=len)
    for k in range(len(pal)):
        print(pal[k], end='')
        if k != len(pal)-1: print(' ', end= '')
        
    print()