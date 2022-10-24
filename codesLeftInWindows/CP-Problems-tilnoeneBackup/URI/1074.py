n = int(input())

for i in range(0,n):
    x = int(input())
    res = ""
    if(x==0):
        print("NULL")
    else:
        if(x%2==0):
            res+="EVEN "
        else:
            res+="ODD "
        if(x>0):
            res+="POSITIVE"
        else:
            res+="NEGATIVE"
        print(res)
