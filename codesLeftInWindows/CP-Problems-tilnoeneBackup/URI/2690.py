n = int(input())

for c in range(n):
    senha = input()
    it = 0
    for i in range(0, len(senha)):
        if(senha[i] != ' '):
            if(senha[i] == 'G' or senha[i] == 'Q' or senha[i] == 'a' or senha[i] == 'k' or senha[i] == 'u'):
                print("0", end = '')
            elif(senha[i] == 'I' or senha[i] == 'S' or senha[i] == 'b' or senha[i] == 'l' or senha[i] == 'v'):
                print("1", end = '')
            elif(senha[i] == 'E' or senha[i] == 'O' or senha[i] == 'Y' or senha[i] == 'c' or senha[i] == 'm' or senha[i] == 'w'):
                print("2", end = '')
            elif(senha[i] == 'F' or senha[i] == 'P' or senha[i] == 'Z' or senha[i] == 'd' or senha[i] == 'n' or senha[i] == 'x'):
                print("3", end = '')
            elif(senha[i] == 'J' or senha[i] == 'T' or senha[i] == 'e' or senha[i] == 'o' or senha[i] == 'y'):
                print("4", end = '')
            elif(senha[i] == 'D' or senha[i] == 'N' or senha[i] == 'X' or senha[i] == 'f' or senha[i] == 'p' or senha[i] == 'z'):
                print("5", end = '')
            elif(senha[i] == 'A' or senha[i] == 'K' or senha[i] == 'U' or senha[i] == 'g' or senha[i] == 'q'):
                print("6", end = '')
            elif(senha[i] == 'C' or senha[i] == 'M' or senha[i] == 'W' or senha[i] == 'h' or senha[i] == 'r'):
                print("7", end = '')
            elif(senha[i] == 'B' or senha[i] == 'L' or senha[i] == 'V' or senha[i] == 'i' or senha[i] == 's'):
                print("8", end = '')
            elif(senha[i] == 'H' or senha[i] == 'R' or senha[i] == 'j' or senha[i] == 't'):
                print("9", end = '')
            
            it += 1
            
            if(it == 12):
                break
            
    print()
        