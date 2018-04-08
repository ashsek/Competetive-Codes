import math

for i in range(int(input())):
	a = float(input())
	print(a)
	o = math.pi/4 - math.acos(a/math.sqrt(2))
	c, s = math.cos(o), math.sin(o)
	x1 = float(0.5*c)
	y1 = float(0.5*s)
	x2 = float(-0.5*s)
	y2 = float(0.5*c)
	if a == float(1):
		y1 = 0
		x2 = 0
	print('Case #'+str(i+1)+':')
	print(x1,y1,0)
	print(x2,y2,0)
	print(0,0,0.5)