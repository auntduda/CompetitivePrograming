nomes = []
nomesl = []

while True:
    try:
        nome = input()
        
        nomes.append(nome)
        nomesl.append(nome.lower())
    except:
        nomesl = sorted(nomesl)
        for i in range(len(nomes)):
            if(nomes[i].lower()==nomesl[-1]):
                print(nomes[i])
        break