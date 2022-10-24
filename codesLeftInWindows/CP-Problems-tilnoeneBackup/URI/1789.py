while True:
    try:
        n = int(input())
        nums = [int(i) for i in input().split(' ')]
        if max(nums)<10:
            print(1)
        elif max(nums)<20:
            print(2)
        else:
            print(3)
    except:
        break