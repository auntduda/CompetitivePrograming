ch = -1

fiba = [(0, 0), (1, 0)]

def fib(n):
    global fiba
    
    for i in range(len(fiba), n+1):
        fiba.append((fiba[-1][0]+fiba[-2][0], fiba[-1][1]+fiba[-2][1]+2))

def main():
    global fiba
    
    nc = int(input())
    
    for i in range(nc):
        n = int(input())
        fib(n)
        
        print("fib({}) = {} calls = {}".format(n, fiba[n][1], fiba[n][0]))
        
main()