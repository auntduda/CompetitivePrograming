def main():
	a = input().split()
	b = input().split()

	for i in range(5):
		if(a[i] == b[i]):
			print('N')
			return

	print('Y')

main()