renda = float(input())

if(renda<=2000):
    print("Isento")
else:
    if(renda<=3000):
        print("R$ {:.2f}".format((8*(renda-2000))/100))
    else:
        if(renda<=4500):
            print("R$ {:.2f}".format((18*(renda-3000))/100+80))
        else:
            print("R$ {:.2f}".format((28*(renda-4500))/100+270+80))