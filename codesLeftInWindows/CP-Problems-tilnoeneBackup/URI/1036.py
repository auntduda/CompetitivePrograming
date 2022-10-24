from math import sqrt

n = [float(i) for i in input().split()]
a = n[0]
b = n[1]
c = n[2]

delta = b**2-4*a*c

if delta<0 or a==0:
    print("Impossivel calcular")
else:
    r1 = (-b+sqrt(delta))/(2*a)
    r2 = (-b-sqrt(delta))/(2*a)
    print("R1 = {:.5f}\nR2 = {:.5f}".format(r1, r2))