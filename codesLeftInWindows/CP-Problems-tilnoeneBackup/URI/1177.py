k=0
v = int(input())
for i in range(0, 1000):
    print("N["+str(i)+"] = "+str(k))
    if(k==v-1):
        k=0
    else:
        k=k+1
