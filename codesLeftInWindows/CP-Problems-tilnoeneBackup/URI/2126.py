caso=0
while True:
    try:
        caso+=1
        a = input()
        s = input()
        qnt=s.count(a)
        print("Caso #{}:".format(caso))
        if(qnt!=0):
            print("Qtd.Subsequencias: {}".format(qnt))
            k=0
            for i in range(len(s)):
                if(s[k:].count(a)==0 or i==len(s)-1):
                    print("Pos: {}".format(k))
                    break
                else:
                    k+=1
        else:
            print("Nao existe subsequencia")
        print()
    except:
        break