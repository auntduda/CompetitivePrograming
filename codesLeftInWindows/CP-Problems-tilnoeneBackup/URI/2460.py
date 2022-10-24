n = int(input())
vn = [int(i) for i in input().split()]

m = int(input())
vm = [int(i) for i in input().split()]

for i in vm:
    vn.remove(i)

for i in range(0, len(vn)):
    print(vn[i], end = '')
    
    if(i == len(vn)-1):
        print()
    else:
        print(' ', end = '')