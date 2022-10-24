val=[]
n=[2,5,10,20,50,100]

for i in range(6):
    for j in range(i, 6):
        val.append(n[i]+n[j])

while True:
    v = [int(i) for i in input().split(' ')]
    if(v[0]==0 and v[1]==0):
        break
    if v[1]-v[0] in val:
        print("possible")
    else:
        print("impossible")