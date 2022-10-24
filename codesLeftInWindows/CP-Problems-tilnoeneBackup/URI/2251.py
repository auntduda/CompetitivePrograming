tst = 1
while True:
    n = int(input())
    if(n == 0):
        break
    
    print("Teste {}".format(tst))
    print(2**n-1)
    print()
    
    tst += 1