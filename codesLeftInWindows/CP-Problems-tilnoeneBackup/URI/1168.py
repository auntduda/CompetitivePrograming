n = int(input())
leds = [6, 2, 5, 5, 4, 5, 6, 3, 7, 6]
for i in range(n):
    v = input()
    soma=0
    for j in v:
        soma+=leds[int(j)]
    print(soma, "leds")

