def main():
    n = int(input())
    
    v = []
    
    for i in range(n):
        v.append([int(i) for i in input().split()])
    
    linhas = []
    colunas = []
    diag1 = diag2 = 0
    
    for i in range(n):
        linhas.append(0)
        for j in range(n):
            linhas[-1] += v[i][j]
            
    for i in range(n):
        colunas.append(0)
        for j in range(n):
            colunas[-1] += v[j][i]
    
    for i in range(n):
        diag1 += v[i][i]
        
    for i in range(n):
        diag2 += v[n-1-i][i]
        
    if diag1 != diag2:
        print(-1)
        return
    
    for i in range(n):
        if linhas[i] != diag1 or colunas[i] != diag1:
            print(-1)
            return
    
    print(diag1)
    
main()