def soma_frac(a, b):
    if(a[1] == b[1]): 
        return [a[0]+b[0], a[1]]
    
    return [a[0]*b[1] + a[1]*b[0], a[1]*b[1]]

def main():
    n = int(input())
    
    frac = []
    for i in range(n):
        frac.append([int(j) for j in input().split()])
    
    ans = frac[0]
    for i in range(1, n):
        ans = soma_frac(ans, frac[i])
        
    if ans[0] <= ans[1]:
        print('OK')
    else:
        print('FAIL')
        
main()