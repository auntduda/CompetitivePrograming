a = int(input())
n = int(input())

tot = 0
for i in range(0, n):
    f = int(input())
    if(f*a >= 40000000): tot += 1
    
print(tot)