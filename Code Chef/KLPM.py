# def gs(s):
#   length = len(s)
#   return [s[i:j+1] for i in range(length) for j in range(i,length)]

s = str(input())
n = len(s)
DP = [[0]*n for _ in range(n)] #total number of pairs s.t. S[i..k]S[w..j] is palindrome.
P = [[0]*n for _ in range(n)] #ispalin?
LR = [[0]*n for _ in range(n)] #ispalin?
RL = [[0]*n for _ in range(n)]

#calculating P
for i in range(n):
    for j in range(n):
        s2 = s[i:j+1]
        if s[i:j+1] == s2[::-1]:
            P[i][j] = 1
        if i > j:
            P[i][j] = 0
# print(P)

#calculating LR
for i in range(n):
    for j in range(n):
        if j == 0:
            LR[i][j] = P[i][j]
        else:
            LR[i][j] = P[i][j] + LR[i][j-1]
# print(LR)

#calculating RL
for j in range(n):
    for i in range(n-1,-1,-1):
        if i == n-1:
            RL[i][j] = P[i][j]
        else:
            RL[i][j] = P[i][j] + RL[i+1][j]
# print(RL)

#calculating DP
for j in range(n):
    for i in range(j,-1,-1):
        if i == j:
            DP[i][j] = 0
            continue
        if i > j:
            DP[i][j] = 0
            continue
        if s[i] == s[j]:
            DP[i][j] = 1+ RL[i+1][j-1] + LR[i+1][j-1] + DP[i+1][j-1]
        else:
            DP[i][j] = 0


# print(DP)
s = 0
for i in range(n):
    s += sum(DP[i])
print(s)

# l = gs(s2)

# class Solution(object):
#     def isPalindrome(self, word):
#         i, j = 0, len(word) - 1
#         while i <= j:
#             if word[i] != word[j]:
#                 return False
#             i += 1
#             j -= 1
#         return True

#     def palindromePairs(self, words):
#         n, r = len(words), []
#         for i in range(n):
#             for j in range(i + 1, n):
#                 if self.isPalindrome(words[i] + words[j]):
#                     r.append([i, j])

#                 if self.isPalindrome(words[j] + words[i]):
#                     r.append([j, i])
#         return r


# class Solution(object):
#     def palindromePairs(self, words):
#         table, r = dict(map(reversed, enumerate(words))), set()
#         for i, word in enumerate(words):
#             for k in range(len(word) + 1):
#                 a, b = word[:k], word[k:]

#                 if a == a[::-1] and table.get(b[::-1], -1) not in [-1, i]:
#                     r.add((table[b[::-1]], i))

#                 if b == b[::-1] and table.get(a[::-1], -1) not in [-1, i]:
#                     r.add((i, table[a[::-1]]))

#         return list(r)

# s = Solution()
# l.remove(s2)
# k = s.palindromePairs(l)
# print(l)
# count = 0
# for j in k:
# 	if j[0]<j[1]:
# 		print(j)
# 		count += 1
# print(count)