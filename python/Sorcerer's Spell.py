def prime(k,n):
	while n >= 2:
		if k % n == 0:
			return n
		else:
			n-=1
	return 1

def gcd(a,b):
	if a ==0:
		return b;
	return gcd(b % a, a);


def findGCD(arr,n):
	result = arr[0];
	for i in range(1,n):
		result = gcd(arr[i],result)
		if(result == 1):
			return 1
	return result

if __name__ == "__main__":
	t = int(input())
	while(t):
		n, m = [int(a) for a in input().split()]
		odd = 0
		even = 0
		p = [int(a) for a in input().split()]
		o = findGCD(p, m)
		if o<=n:
			print(n-o)
		else:
			p = prime(o,n)
			print(n-p)
		t-=1
