a = input().split()
b = input().split()

print("VALOR A PAGAR: R$ {:.2f}".format(int(a[1])*float(a[2])+int(b[1])*float(b[2])))