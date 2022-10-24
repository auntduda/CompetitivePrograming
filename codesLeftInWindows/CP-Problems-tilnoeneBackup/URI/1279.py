val=[]
while True:
    try:
        val.append(int(input()))
    except:
        for ano in val:
            bi=False
            fest=0

            if((ano%4==0 and ano%100!=0) or ano%400==0):
                print("This is leap year.")
                bi=True
                fest+=1
            if(ano%15==0):
                print("This is huluculu festival year.")
                fest+=1
            if(bi==True and ano%55==0):
                print("This is bulukulu festival year.")
            if(fest==0):
                print("This is an ordinary year.")
            if(ano!=val[-1]):
                print()
        break