def gcd(a,b): return a if b == 0 else gcd(b, a % b)
T = int(input())
for _ in range(T):
    avg = input()
    pos = avg.find('.')
    if pos == -1:
        print(1)
        continue
    pow10 = 10**(len(avg)-pos-1)
    score = int(avg[:pos] + avg[pos+1:])
    print(int(pow10 / gcd(pow10, score)))
    