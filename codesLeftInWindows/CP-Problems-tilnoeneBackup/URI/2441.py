k = [int(i) for i in input().split()]

a = k[0]
b = k[1]
c = k[2]

if a > b:
    temp = a
    a = b
    b = temp
    
if b > c:
    temp = b
    b = c
    c = temp
    
if a > b:
    temp = a
    a = b
    b = temp
    
tot = 0

fima = a+200
fimb = b+200
fimc = c+200

if fima < b:
    tot += b - fima

if fimb < c:
    tot += c - fimb
    
tot += a + 600 - fimc

print(tot*100)