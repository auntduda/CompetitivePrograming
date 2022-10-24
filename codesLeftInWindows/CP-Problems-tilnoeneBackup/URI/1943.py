n = int(input())
 
res = "Top "
if(n <= 1): res += "1"
elif(n <= 3): res += "3"
elif(n <= 5): res += "5"
elif(n <= 10): res += "10"
elif(n <= 25): res += "25"
elif(n <= 50): res += "50"
else: res += "100"

print(res)