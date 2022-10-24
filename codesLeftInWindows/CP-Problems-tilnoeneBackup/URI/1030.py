import sys
sys.setrecursionlimit(15000)

def g(n, k):
    if n == 1:
        return 0
    return (g(n-1, k) + k) % n

def main():
    nc = int(input())
    
    for i in range(nc):
        ls = [int(j) for j in input().split()]
        n = ls[0]
        k = ls[1]
        print("Case {}: {}".format(i + 1, g(n, k) + 1))
        
main()