n = int(input())
txt = input().split()

for i in range(len(txt)):
    if(len(txt[i])==3):
        if(txt[i][0]=="U" and txt[i][1]=="R"): txt[i]="URI"
        elif(txt[i][0]=="O" and txt[i][1]=="B"): txt[i]="OBI"
    print(txt[i], end='')
    if(i==len(txt)-1):
        print()
    else:
        print(" ", end='')