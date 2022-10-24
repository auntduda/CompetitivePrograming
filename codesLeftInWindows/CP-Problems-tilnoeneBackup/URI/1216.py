tot = it = 0

while True:
    try:
        nome = input()
        v = int(input())
        tot += v
        
        it += 1
    except:
        print("{:.1f}".format(tot/it))
        
        break