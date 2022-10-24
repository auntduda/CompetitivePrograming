n = int(input())
nums = [int(i) for i in input().split()]
menor = nums[0]
pos=1

for i in range(1, n):
    if(nums[i]<menor):
        menor = nums[i]
        pos = i
print("Menor valor: "+str(menor))
print("Posicao: "+str(pos))
