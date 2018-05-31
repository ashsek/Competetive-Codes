# def is_palindrome(word):

#     letters = list(word)    
#     is_palindrome = True
#     i = 0

#     while len(letters) > 0 and is_palindrome:       
#         if letters[0] != letters[(len(letters) - 1)]:
#             is_palindrome = False
#         else:
#             letters.pop(0)
#             if len(letters) > 0:
#                 letters.pop((len(letters) - 1))

#     return is_palindrome


for i in range(int(input())):
	s = str(input())
	s2 = list(s)
	n = len(s)
	c = 0
	for k in range(n):
		t = s2[0]
		s2.pop(0)
		s2.append(t)
		if s2 = reversed(s2):
			c+= 1
	print(c)
