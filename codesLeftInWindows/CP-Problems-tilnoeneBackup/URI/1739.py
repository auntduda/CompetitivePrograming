fib = [1, 1, 2]
thr = []

def nextFib():
	global fib

	fib.append(fib[-1]+fib[-2])

def threebonacci(n):
	n = str(n)
	soma = qnt3 = 0

	for i in n:
		if(i == '3'):
			qnt3 += 1
		soma += int(i)

	if soma % 3 == 0 or qnt3 > 0:
		return True

	return False

def main():
	global fib
	global thr

	while True:
		try:
			n = int(input())

			while len(thr) < n:
				nextFib()

				if threebonacci(fib[-1]):
					thr.append(fib[-1])

			print(thr[n-1])
		except:
			break

main()