k = -1

while True:
    l = input()
    
    if(l.count(' ') == 0 and k > 0):
        print(k)
        k = 0
        if(l == "0"): 
            break
    else:
        k += 1