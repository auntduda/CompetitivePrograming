n = int(input())

for i in range(n):
    txt = input()
    
    print(txt[:len(txt)//2][::-1], end = '')
    print(txt[len(txt)//2:][::-1])