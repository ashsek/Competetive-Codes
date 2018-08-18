def calcu(num):
    if int(num) == 0:
        return 0
    if int(num) < 10 and len(num) == 1:
        return 1
    if 10 < int(num) <= 26 and len(num) == 2:
        return 2
    if len(num)>2 and int(num[:2]) <= 26 and int(num[:2]) > 0 and int(num[:1]) != 0:
        return calcu(num[1:]) + calcu(num[2:])
    elif int(num[:2])>26:
        return calcu(num[1:])
    else:
        return 0
while True:
    s = input()
    print(calcu(s))
