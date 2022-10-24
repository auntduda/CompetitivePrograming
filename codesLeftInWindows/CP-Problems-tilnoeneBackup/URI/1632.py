n = int(input())

for i in range(0, n):
    senha = input().lower()
    esp = senha.count('a') + senha.count('e') + senha.count('i') + senha.count('o') + senha.count('s')
    print(3**esp * 2**(len(senha)-esp))