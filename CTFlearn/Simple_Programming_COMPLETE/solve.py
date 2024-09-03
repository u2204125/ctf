file = open("data.dat")
res = 0

for line in file:
	_0s = line.count('0')
	_1s = line.count('1')

	"""
	_0s = 0
	_1s = 0

	for ch in line:
		if (ch == '0'):
			_0s += 1
		elif(ch == '1'):
			_1s += 1
	"""

	if((_0s%3==0) or (_1s%2==0)):
		res += 1

print(res)
file.close()