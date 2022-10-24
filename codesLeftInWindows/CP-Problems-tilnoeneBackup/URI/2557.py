def incgnt(a):
    if(a == "L" or a == "J" or a == "R"):
        return True
    return False

def resolve(a, b, c):
    if(incgnt(a)):
        print(int(c)-int(b))
    elif(incgnt(b)):
        print(int(c)-int(a))
    else:
        print(int(a)+int(b))

while True:
    try:
        eq = input()

        v1 = v2 = v3 = ""
        it = 0
        
        while(eq[it] != '+'):
            v1 += eq[it]
            it += 1
        
        it += 1
        while(eq[it] != '='):
            v2 += eq[it]
            it += 1
        
        it += 1
        while(it != len(eq)):
            v3 += eq[it]
            it += 1

        resolve(v1, v2, v3)
        
    except:
        break