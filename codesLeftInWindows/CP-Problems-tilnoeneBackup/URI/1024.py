n = int(input())

for i in range(n):
    pal = input()
    cri = ""
    for j in range(len(pal)):
        if pal[j].isalpha():
            cri+=chr(ord(pal[j])+3)
        else:
            cri+=pal[j]
    cri=cri[::-1]
    meio=len(cri)//2
    res=""
    for j in range(meio, len(cri)):
        res+=(chr(ord(cri[j])-1))
        
    print(cri[:meio]+res)
