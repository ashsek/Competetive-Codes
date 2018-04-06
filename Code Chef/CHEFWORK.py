n = int(input())
c = list(map(int,input().split())) # coins
t = list(map(int,input().split())) # type of workers
# min coins for written and translation.
# t = 1 -> translator
# t = 2 -> author
# t = 3 -> both author / translator 
#print(min(c))
#c = [4,5,6,1,2,3,4,5,2,2,2]
#t = [1,1,1,2,2,2,3,3,3,1,1]
l = []
c2 = c[:]
coins = 0
c2.sort()
for i in c2:
    index = c.index(i)
    if t[index] not in l and t[index] != 3:
        l.append(t[index])
        coins += i
    elif t[index] == 3:
        if len(l) == 0 or len(l) == 1:
            coins = i
            break
        elif len(l) != 0:
            if coins > i:
                coins = i
                break
    elif l.sort() == [1,2]:
        break
    c.pop(index)
    t.pop(index)
print(coins)