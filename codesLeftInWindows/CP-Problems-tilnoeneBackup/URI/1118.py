escolha=0
x=-1
while(True):
    n = float(input())
    if(n>=0 and n<=10):
        if(x==-1):
            x=n
        else:
            y=n
            break
    else:
        print("nota invalida")
        
print("media = {:.2f}".format((x+y)/2))

while(escolha!=2):
    if(escolha!=1 and escolha!=2):
        print("novo calculo (1-sim 2-nao)")
        escolha=2
        escolha = int(input())
    elif(escolha==1):
        x=-1
        while(True):
            n = float(input())
            if(n>=0 and n<=10):
                if(x==-1):
                    x=n
                else:
                    y=n
                    break
            else:
                print("nota invalida")
        print("media = {:.2f}".format((x+y)/2))
        print("novo calculo (1-sim 2-nao)")
        escolha = int(input())
    else:
        break