n = int(input())
c = list(map(int,input().split())) # coins
t = list(map(int,input().split())) # type of workers
# min coins for written and translation.
# t = 1 -> translator
# t = 2 -> author
# t = 3 -> both author / translator 
print(min(c))