# import math
# for _ in range(int(input())):
#     n = int(input())
#     if n == 1:
#         print('2')
#         continue
#     pow2 = int(math.log2(n))
#     rem = n - 2**pow2
#     if rem != 0:
#         pow23 = int(math.log2(rem))
#     else:
#         pow23 = 0
#     if pow23 +1 != pow2 or abs(n - (2**pow2 + 2**pow23)) < abs(2**pow2 + 2**(pow23+1) - n):
#         print('========NUM==========')
#         print(2**pow2)
#         print(2**pow23)
#         print('=========Diff=========')
#         i = int((math.log2(n-2**(pow2-1))))
#         if i != pow2-1:
#             #pass
#             pass
#         else: i = 0
#         print(min(abs(n - (2**pow2 + 2**pow23)), abs(2**pow2 + 2**(pow23+1) - n), abs(n-2**(pow2-1) - 2**i)))
#         print('======END============')

#     else:
#         pow2 += 1
#         rem = abs(n - 2**(pow2))
#         if rem != 0:
#             pow23 = int(math.log2(rem))
#         else:
#             pow23 = 0
#         print('=======NUM===========')
#         print(2**pow2)
#         print(2**pow23)
#         print('=======DIFF===========')
#         i = int((math.log2(n-2**(pow2-1))))
#         if i != pow2-1:
#             #pass
#             pass
#         else: i = 0
#         print(min(abs(n - (2**pow2 + 2**pow23)), abs(2**pow2 + 2**(pow23+1) - n), abs(n-2**(pow2-1) - 2**i)))
#         print('=========END=========')


#Shows wrong at 62 should give 3 for 65 but gives 4 for 66.
import math
for _ in range(int(input())):
    n = int(input())
    if n == 1:
        print('2')
        continue
    pow2 = int(math.log2(n))
    rem = n - 2**pow2
    if rem != 0:
        pow23 = int(math.log2(rem))
    else:
        pow23 = 0
    print(2**pow2)
    print(2**pow23)
    if pow23 +1 !=  pow2:
        j = abs(n - 2**pow2 - 2**pow23)
        k = abs(n - 2**pow2 - 2**(pow23+1))
        print(min(j,k))
    else:
        pow2 = pow2+1 if abs(n - 2**(pow2+1)) < abs(n - 2**pow2) else pow2
        rem = abs(n - 2**pow2)
        if rem != 0:
            pow23 = int(math.log2(rem))
        else:
            pow23 = 0
        print(2**pow2)
        print(2**pow23)
        print(abs(n - 2**pow2 - 2**pow23))