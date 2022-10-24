def romano(n, c):
    if(c==1):
        if(n==9): print("IX", end='')
        elif(n==4): print("IV", end='')
        else:
            if(n>=5):
                print("V", end='')
                n-=5
            
            for i in range(0, n): print("I", end='')
        
    elif(c==2):
        if(n==9): print("XC", end='')
        elif(n==4): print("XL", end='')
        else:
            if(n>=5):
                print("L", end='')
                n-=5
            
            for i in range(0, n): print("X", end='')
        
    else:
        if(n==9): print("CM", end='')
        elif(n==4): print("CD", end='')
        else:
            if(n>=5):
                print("D", end='')
                n-=5
            
            for i in range(0, n): print("C", end='')
        
def main():
    num = input()
    tam = len(num)
    zeros=1

    for i in range(0, tam): zeros*=10
    for i in range(0,tam): romano(int(num[i]), tam-i)
    
    print()

    return 0

main()