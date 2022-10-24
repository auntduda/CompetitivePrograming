nums=[[], [], [], [1, 'one', 2, 'two', 6, 'six', 10, 'ten'], [0, 'zero', 4, 'four', 5, 'five', 9, 'nine'], [3, 'three', 7, 'seven', 8, 'eight', 40, 'forty', 50, 'fifty', 60, 'sixty'], [11, 'eleven', 12, 'twelve', 20, 'twenty', 30, 'thirty', 80, 'eighty', 90, 'ninety'], [15, 'fifteen', 16, 'sixteen', 70, 'seventy'], [13, 'thirteen', 14, 'fourteen', 18, 'eighteen', 19, 'nineteen'], [17, 'seventeen']]
n=int(input())

for i in range(n):
    v=input()
    erros=0
    for i in range(1, len(nums[len(v)]), 2):
        erros=0
        #se não for da um in e count... tramp mas ok
        for j in range(len(nums[len(v)][i])):
            if(v[j]!=nums[len(v)][i][j]):
                erros+=1
            if(j==len(nums[len(v)][i])-1 and erros<=1):
                print(nums[len(v)][i-1])
                