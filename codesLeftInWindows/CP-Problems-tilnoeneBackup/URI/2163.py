linha = input().split()
n = int(linha[0])
m = int(linha[1])

ter = []
val = 1
for i in range(0, n):
    ter.append([int(i) for i in input().split()])

for i in range(1, n-1):
    for j in range(1, m-1):
        if(ter[i][j]==42 and ter[i-1][j-1]==7 and ter[i-1][j]==7 and ter[i-1][j+1]==7 and ter[i][j-1]==7 and ter[i][j+1]==7 and ter[i+1][j-1]==7 and ter[i+1][j]==7 and ter[i+1][j+1]==7):
            print(i+1, j+1)
            val = 0

if(val==1):
    print("0 0")
