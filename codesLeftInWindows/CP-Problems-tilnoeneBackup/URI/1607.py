n = int(input())

for i in range(0, n):
    f = input().split()
    a = f[0]
    b = f[1]
    
    tot = 0
    for j in range(0, len(a)):
        if(a[j] <= b[j]): tot += ord(b[j]) - ord(a[j])
        else: tot += 26 + ord(b[j]) - ord(a[j]);
    
    print(tot)