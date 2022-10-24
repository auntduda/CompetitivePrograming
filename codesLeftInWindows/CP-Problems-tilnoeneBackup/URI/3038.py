c = {}

for i in range(256):
    c[chr(i)] = chr(i)
    
c['@'] = 'a'
c['&'] = 'e'
c['!'] = 'i'
c['*'] = 'o'
c['#'] = 'u'

while True:
    try:
        frase = input()
        
        for i in frase:
            print(c[i], end = '')
        print()
        
    except:
        break