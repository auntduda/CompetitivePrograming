b=2
soma=1
for a in range(3, 40, 2):
    c=a/b
    soma+=c
    b*=2
print("{:.2f}".format(soma))