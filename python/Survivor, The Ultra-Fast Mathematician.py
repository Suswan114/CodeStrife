s1 = input()
s2 = input()
res = []

for i in range(len(s1)):
	if s1[i] == s2[i]:
		res.append("0")
	else:
		res.append("1")

print("".join(res))