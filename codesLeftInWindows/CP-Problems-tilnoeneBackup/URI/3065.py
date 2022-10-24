import re
tst=1
while True:
    n = int(input())
    if n==0: break
    exp = input()
    nums = re.split('[\+, -]', exp)
    soma = 0
    k = 1
    for i in range(len(exp)):
        if(exp[i]=='+'):
            soma+=int(nums[k-1])
            k+=1
        elif(exp[i]=='-'):
            soma-=int(nums[k-1])
            k+=1

    if(tst!=1): print()
    print("Teste {}".format(tst))
    print(soma)
    tst+=1
