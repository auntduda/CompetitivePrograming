def escreve(salario, porcentagem):
    print("Novo salario: {:.2f}".format((salario*(100+porcentagem))/100))
    print("Reajuste ganho: {:.2f}".format((porcentagem*salario)/100))
    
def main():
    salario = float(input())
    if(salario<=400):
        escreve(salario, 15)
        print("Em percentual: 15 %")
    elif(salario<=800):
        escreve(salario, 12)
        print("Em percentual: 12 %")
    elif(salario<=1200):
        escreve(salario, 10)
        print("Em percentual: 10 %")
    elif(salario<=2000):
        escreve(salario, 7)
        print("Em percentual: 7 %")
    else:
        escreve(salario, 4)
        print("Em percentual: 4 %")
        
    return 0
main()