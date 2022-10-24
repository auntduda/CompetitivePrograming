ls = input().replace('7', '0').split()

temp = ""
if(ls[1] == '+'):
    temp = int(str(int(ls[0]) + int(ls[2])).replace('7', '0'))
else:
    temp = int(str(int(ls[0]) * int(ls[2])).replace('7', '0'))
    
print(temp)