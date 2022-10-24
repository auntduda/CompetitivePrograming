v = int(input())
ant = v
for i in range(0, 10):
    if(i!=0):
        ant = ant*2
    print("N[{}] = {}".format(i, ant))