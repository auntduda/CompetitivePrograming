while True:
    try:
        k = 0
        sent = list(input())
        
        for i in range(0, len(sent)):
            if(sent[i].isalpha()):
                if k % 2 == 0:
                    sent[i] = sent[i].upper()
                else:
                    sent[i] = sent[i].lower()
                k += 1
                
        print(''.join(sent))
        
    except:
        break