def descriptografa(a, b):
	for i in range(0, len(a), 2):
		print("{}{}{}".format(a[i], a[i+1], b[i]), end = '')

		if(i + 1 < len(b)):
			print(b[i+1], end = '')
	print()

n = int(input())

for i in range(n):
	nome1 = input()
	nome2 = input()

	descriptografa(nome1, nome2)