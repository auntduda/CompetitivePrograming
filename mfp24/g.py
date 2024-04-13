n = int(input())

time1=0
time2=0

for _ in range(n):
    entrada = input().split()
    
    # print(entrada[2][1])

    if(entrada[1] == "1"):
        time1 = time1 + int(entrada[2][1])
    elif(entrada[1] == "2"):
        time2 = time2 + int(entrada[2][1])

print(f'{time1} x {time2}')