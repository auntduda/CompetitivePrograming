a = [0]
v = a+[int(i) for i in input().split()]

for i in range(1, 17):
    if(v[i] == 1): a = i
    elif(v[i] == 9): b = i

if((a <= 8 and b >= 9) or (b <= 8 and a >= 9)):
    print("final")
elif((a % 2 == 0 and b == a-1) or (b % 2 == 0 and a == b-1)):
    print("oitavas")
elif((a <= 12 and b >= 13) or (a >= 13 and b <= 12) or (a <= 4 and b >= 5) or (a >= 5 and b <= 4)):
    print("semifinal")
else:
    print("quartas")