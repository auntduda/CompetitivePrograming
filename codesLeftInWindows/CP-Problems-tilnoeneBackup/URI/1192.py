n = int(input())

for i in range(n):
    caso = input()
    
    if(caso[0] == caso[2]):
        print(int(caso[0])*int(caso[2]))
    elif(caso[1].islower()):
        print(int(caso[0])+int(caso[2]))
    elif(caso[1].isupper()):
        print(int(caso[2])-int(caso[0]))