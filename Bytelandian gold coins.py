memo = {}

def maxdollars(x):
    global memo
    if x in memo:
        return memo[x]
    if int(x/3) == 0 or int(x/4) == 0:
        return x
    else:
        memo[x] = max(int(maxdollars(x//2) + maxdollars(x//3) + maxdollars(x//4)),x)
        return memo[x]
try:
    while True:
        print(maxdollars(int(input())))
except (EOFError, ValueError):
    pass 