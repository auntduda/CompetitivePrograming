n = [float(i) for i in input().split()]
a = n[0]
b = n[1]
c = n[2]

print("TRIANGULO: {:.3f}\nCIRCULO: {:.3f}\nTRAPEZIO: {:.3f}\nQUADRADO: {:.3f}\nRETANGULO: {:.3f}".format(a*c/2, c**2*3.14159, ((a+b)*c)/2, b*b, a*b))