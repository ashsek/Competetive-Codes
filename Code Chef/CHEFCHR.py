c = 0
for i in range(int(input())):
    s = list(input())
    l = ['cefh','cehf','cfeh','cfhe','chef','chfe','ecfh','echf','efch','efhc','ehcf','ehfc','fceh','fche','fech','fehc','fhce','fhec','hcef','hcfe','hecf','hefc','hfce','hfec']
    #print(len(l))
    for j in range(len(s)-3):
        y = ''.join(s[j:j+4])
        if y in l:
            c += 1
    if c > 0:
        print("lovely",c)
        c = 0
    else:
        print("normal")
