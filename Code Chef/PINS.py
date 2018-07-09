# N digits,
# probability that get robbed
# give out P and Q
from fractions import Fraction
for _ in range(int(input())):
	n = int(input())
	if n%2 == 0:
		p = 9*10**((n-2)/2)
	else:
		p = 9*10**((n-1)/2)
	print(p)
	prob = p/10**n
	f = Fraction(str(prob))
	print(f.numerator,f.denominator)