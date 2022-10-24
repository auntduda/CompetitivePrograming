def vogal(i):
    if(i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u'):
        return True
    return False

def retira_vogais(frase):
    ans = ""
    for i in frase:
        if vogal(i):
            ans += i
    
    return ans
    
def main():
    frase = input()
    ori = retira_vogais(frase)
    inv = ori[::-1]
    
    if(ori == inv):
        print('S')
    else:
        print('N')
    
main()