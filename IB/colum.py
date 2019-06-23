A = input()
l = len(A)
ans = 0
for j in A:
    ans += (ord(j)-64)*((26)**(l-1))
    l -= 1
    
print(ans)