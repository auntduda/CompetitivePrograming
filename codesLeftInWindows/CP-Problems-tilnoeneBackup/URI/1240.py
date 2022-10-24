n = int(input())
for i in range(n):
    nums = input().split(' ')
    if(nums[0][len(nums[0])-len(nums[1]):]==nums[1]):
        print('encaixa')
    else:
        print('nao encaixa')