n = int(input())

for i in range(n):
    k = [int(i) for i in input().split()]
    
    if(k[8] >= k[6] and k[8] <= k[4] and k[9] >= k[1] and k[9] <= k[7]): print("1");
    else: print("0");