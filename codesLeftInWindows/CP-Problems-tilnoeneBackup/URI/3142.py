def lpos(n):
    return ord(n) - 64;

while True:
    try:
        col = input()
        
        existe = True
        
        if(len(col) > 3): existe = False
        elif(len(col) == 3 and (col[0] > 'X' or (col[0] == 'X' and col[1] > 'F') or (col[0] == 'X' and col[1] ==  'F' and col[2] > 'D'))): existe = False
        
        if existe:
            size = len(col)
            s = col
            
            if(size == 3):
                v = lpos(s[0]) * 26 * 26 + lpos(s[1]) * 26 + lpos(s[2])
            elif(size == 2):
                v = lpos(s[0]) * 26 + lpos(s[1])
            else:
                v = lpos(s[0])
            
            print(v)
        else: 
            print("Essa coluna nao existe Tobias!");
        
    except:
        break