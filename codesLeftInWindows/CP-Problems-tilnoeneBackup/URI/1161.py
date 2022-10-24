from math import factorial as f

while True:
    try:
        v = [int(i) for i in input().split(' ')]
        print(f(v[0])+f(v[1]))

    except:
        break