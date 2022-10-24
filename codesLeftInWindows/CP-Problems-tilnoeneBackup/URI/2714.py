n = int(input())

for i in range(n):
	l = input()

	if(l[0] == 'R' and l[1] == 'A' and len(l) == 20):
		des = False
		res = ""

		for j in range(2, len(l)):
			if l[j] != '0':
				des = True

			if(des):
				res += l[j]

		print(res)
		
	else: 
		print("INVALID DATA")