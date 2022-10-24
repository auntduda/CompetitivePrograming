n = int(input())

freq = {}
tot = 0

for i in range(10**6+1):
    freq[i] = False

for i in range(n):
    v = int(input())
    
    if(not freq[v]):
        tot += 1
    
    freq[v] = True
    
print(tot)