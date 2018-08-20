for i in range(int(input())):
    j = int(input())
    res = 1
    while(j>=2):
        res *= j
        j -= 1
    print(res)
