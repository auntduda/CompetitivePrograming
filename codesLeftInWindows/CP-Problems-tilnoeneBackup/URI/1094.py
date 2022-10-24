n = int(input())
s=0
r=0
c=0

for i in range(0, n):
    ns = input().split()
    v = int(ns[0])
    animal = ns[1]
    if(animal=='C'):
        c+=v;
    elif(animal=='R'):
        r+=v;
    else:
        s+=v;

soma = c+r+s
    
print("Total: {} cobaias".format(c+r+s));
print("Total de coelhos: {}".format(c));
print("Total de ratos: {}".format(r));
print("Total de sapos: {}".format(s));
print("Percentual de coelhos: {:.2f} %".format((100*c)/soma));
print("Percentual de ratos: {:.2f} %".format((100*r)/soma));
print("Percentual de sapos: {:.2f} %".format((100*s)/soma));
