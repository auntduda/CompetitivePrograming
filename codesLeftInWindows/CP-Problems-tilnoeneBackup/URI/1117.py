n1=-1
while(True):
    nota = float(input())
    if(nota>=0 and nota<=10):
        if(n1<0):
            n1=nota
        else:
            n2=nota
            break
    else:
        print("nota invalida")
print("media = {:.2f}".format(((n1+n2)/2))) 
