# your code goes here
import string

def work() :
    n = input()
    c = ""
    p = ""
    for i in range(n) :
        rule = raw_input().split()
        c += rule[0]
        p += rule[1]
    trans = string.maketrans(c, p)
    encrypted = raw_input()
    encrypted = encrypted.translate(trans)
    ans = ""
    for i in range(len(encrypted)) :
        if encrypted[i] != '0' :
            ans = encrypted[i:]
            break
    has_point = False
    for ch in ans :
        if ch == '.' :
            has_point = True
            break
    if has_point :
        end = len(ans)
        while ans[end - 1] == '0' :
            end -= 1
        if ans[end - 1] == '.' :
            end -= 1
        ans = ans[:end]
    if len(ans) == 0 :
        ans = "0"
    print ans

def main() :
    cases = input()
    for i in range(cases) :
        work()

main()