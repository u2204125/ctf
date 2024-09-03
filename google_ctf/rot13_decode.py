f = open("t.txt", 'r')
for line in f:
	for ch in line:
		x = ord(ch)
		if((x>=65 and x<=90) or (x>=97 and x<=122)):
			if(x>(90-13) and x<=90):
				r = chr(65+(x+12-90))
			elif(x>(122-13) and x<=122):
				r = chr(97+(x+12-122))
			else:
				r = chr(x+13)
			
			# print(f"{ch}({x}) -> {r}({ord(r)})")
			print(r, end="")
		else:
			# print(ch)
			print(ch, end="")
	print("\n")
f.close()