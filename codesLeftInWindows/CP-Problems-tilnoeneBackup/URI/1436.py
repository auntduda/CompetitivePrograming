t = int(input())
caso=0
for i in range(t):
    caso+=1
    n = [int(j) for j in input().split(' ')]
    if(n[0]%2==0):
        val=(n[n[0]//2]+n[n[0]//2+1])//2
    else:
        val=n[(n[0]+1)//2]

    print("Caso {}: {}".format(caso, val))