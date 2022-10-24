while(True):
    try:
        n = int(input())
        v = [int(i) for i in input().split(' ')]
        if(v.count(1)>=(2/3)*n): print("impeachment")
        else: print("acusacao arquivada")
    except:
        break;
