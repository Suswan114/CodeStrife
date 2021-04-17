t = int(input())

while(t):
	n,k = [int(a) for a in input().split()]
	p = [int(a) for a in input().split()]
	check = p[0]
	count = 0
	for i in range(1,n):
		if p[i] * 100 > k * check:
			temp = 0
			if (p[i] * 100) % k == 0:
				temp = (p[i] * 100) // k
			else:
				temp = ((p[i] * 100) // k) + 1
			count += temp - check
			check = temp
		check += p[i]
	print(int(count))
	t-=1
