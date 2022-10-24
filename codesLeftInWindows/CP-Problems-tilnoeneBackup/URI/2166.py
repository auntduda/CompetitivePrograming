def fracao(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1 / 2.0
    return 1 / (2 + fracao(n-1))
    
def main():
    print("{:.10f}".format(1.0 + fracao(int(input()))))
    
main()