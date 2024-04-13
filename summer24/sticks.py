n = int(input())

player = []

for x in range(n):
    entrada = input().split()
    player.append(entrada)

stick = ["=", 'O']

# for x in range(n):
#     print(f'{stick[0]} == {player[x][0][0]} ?\n{stick[1]} == {player[x][0][len(player[x][0])-1]} ?\n')
#     print(f'player[{x}][0]={player[x][0]} and player[{x}][1]{player[x][1]}')
#     print(f'{stick[0]} == {player[x][0][0]} and {stick[1]} == {player[x][0][len(player[x][0])-1]}')
#     print(f'{stick[1]} == {player[x][0][0]} and {stick[0]} == {player[x][0][len(player[x][0])-1]}')
#     print(f'{stick[0]} == {player[x][1][0]} and {stick[1]} == {player[x][1][len(player[x][1])-1]}')
#     print(f'{stick[1]} == {player[x][1][0]} and {stick[0]} == {player[x][1][len(player[x][1])-1]}')

menor = 0x3f3f3f3f3f3f3f3f

for x in range(n):
    if((stick[0]==player[x][0][0] and stick[1]==player[x][0][len(player[x][0])-1])
    or (stick[1]==player[x][0][0] and stick[0]==player[x][0][len(player[x][0])-1])):
        if(len(player[x][0])<menor):
            ans = player[x][1]
            menor = len(player[x][0])
        # print("1 elemento da linha comeca com = e termina com 0")
    # elif(stick[1]==player[x][0][0] and stick[0]==player[x][0][len(player[x][0])-1]):
    #     if(len(player[x][0])<menor):
    #         ans = player[x][1]
    #     print("1 elemento da linha comeca com 0 e termina com =")
    if((stick[0]==player[x][1][0] and stick[1]==player[x][1][len(player[x][1])-1])
    or (stick[1]==player[x][1][0] and stick[0]==player[x][1][len(player[x][1])-1])):
        if(len(player[x][1])<menor):
            ans = player[x][0]
            menor = len(player[x][1])
        # print("2 elemento da linha comeca com = e termina com 0")
    # elif(stick[1]==player[x][1][0] and stick[0]==player[x][1][len(player[x][1])-1]):
    #     if(len(player[x][1])<menor):
    #         ans = player[x][0]
    #     print("2 elemento da linha comeca com 0 e termina com =")
    # print(ans)
            
print(ans)