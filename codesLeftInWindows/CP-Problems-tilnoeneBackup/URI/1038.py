n = [float(i) for i in input().split(' ')]
a = n[0]
b = n[1]

if(a==1):
    print("Total: R$ {:.2f}".format(b*4.0))
elif(a==2):
    print("Total: R$ {:.2f}".format(b*4.5))
elif(a==3):
    print("Total: R$ {:.2f}".format(b*5.0))
elif(a==4):
    print("Total: R$ {:.2f}".format(b*2.0))
elif(a==5):
    print("Total: R$ {:.2f}".format(b*1.5))