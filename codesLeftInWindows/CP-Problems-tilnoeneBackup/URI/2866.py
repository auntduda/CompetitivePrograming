n = int(input())

for i in range(0, n):
    pal = input()[::-1]
    for j in pal:
        if j.islower(): print(j, end='')
    print("")