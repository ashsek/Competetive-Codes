lead = 0
p = 0
score1 = 0
score2 = 0
for i in range(int(input())):
	j,k = input().split()
	j = int(j)
	k = int(k)
	score1 += j
	score2 += k
	if score1>score2 and score1-score2 > lead:
		lead = score1 - score2
		p = 1
	if score2>score1 and score2-score1 > lead:
		lead = score2 - score1
		p = 2
print(p,lead)