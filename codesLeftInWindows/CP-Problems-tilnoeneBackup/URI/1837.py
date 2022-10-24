ns = input().split()

a = int(ns[0])
b = int(ns[1])
q = a//b
r = a%b

if(r<0):
    if(a-((q-1)*b)>=0):
        q=q-1
    else:
        q=q+1

    r = a-(q*b)
   
print(q, r)