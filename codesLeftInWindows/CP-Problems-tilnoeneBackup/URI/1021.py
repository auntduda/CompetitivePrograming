n = float(input())
a = int(n)
print("NOTAS:\n{} nota(s) de R$ 100.00\n{} nota(s) de R$ 50.00\n{} nota(s) de R$ 20.00\n{} nota(s) de R$ 10.00\n{} nota(s) de R$ 5.00\n{} nota(s) de R$ 2.00".format(int(n/100), int((n%100)/50), int(((n%100)%50)/20), int((((n%100)%50)%20)/10), int(((((n%100)%50)%20)%10)/5), int((((((n%100)%50)%20)%10)%5)/2)))
v=int(n*100-a*100)
print("MOEDAS:\n{} moeda(s) de R$ 1.00\n{} moeda(s) de R$ 0.50\n{} moeda(s) de R$ 0.25\n{} moeda(s) de R$ 0.10\n{} moeda(s) de R$ 0.05\n{} moeda(s) de R$ 0.01".format(int((((((n%100)%50)%20)%10)%5)%2), int(v/50), int((v%50)/25), int(((v%50)%25)/10), int((((v%50)%25)%10)/5), int((((v%50)%25)%10)%5)));