n = int(input())
v = [int(i) for i in input().split(' ')]
mult = [0, 0, 0, 0]
for i in v:
    if(i%2==0):
        mult[0]+=1
    if(i%3==0):
        mult[1]+=1
    if(i%4==0):
        mult[2]+=1
    if(i%5==0):
        mult[3]+=1

print("{} Multiplo(s) de 2".format(mult[0]))
print("{} Multiplo(s) de 3".format(mult[1]))
print("{} Multiplo(s) de 4".format(mult[2]))
print("{} Multiplo(s) de 5".format(mult[3]))