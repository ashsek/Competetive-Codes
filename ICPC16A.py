for _ in range(int(input())):
	c = list(map(int,input().split()))
	if c[0] != c[2] and c[1] != c[3]:
		print("sad")
	elif c[0] < c[2]:
		print("right")
	elif c[0] > c[2]:
		print("left")
	elif c[1] > c[3]:
		print("down")
	elif c[1] < c[3]:
		print("up")