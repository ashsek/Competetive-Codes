z = int(input())
for x in range(z):
    sr = input()
    c_b = sr.count('B')
    ln = len(sr)
    p = ln-2
    q = (ln-2)//2+1
    if q <= c_b <= p:
        print("Case #" + str(x+1) + ":" + " Y")
    else:
        print("Case #" + str(x+1) + ":" + " N")