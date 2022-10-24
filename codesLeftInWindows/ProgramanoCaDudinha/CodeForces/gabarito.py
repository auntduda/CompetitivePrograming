def fat(n):
    if(n<2):
        return 1
    else:
        return fat(n-1)*n

def combinacao(n, m):
    return (fat(n)/fat(n-m)*fat(m))
        

a,b,c,d,e = list(map(int, input().split()))

c1 = combinacao(20,a)
c2 = combinacao((20-a),b)
c3 = combinacao((20-a-b),c)
c4 = combinacao((20-a-b-c),d)
c5 = combinacao((20-a-b-c-d),e)

print(20*c1*c2*c3*c4*c5)