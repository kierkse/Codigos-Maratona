def comparar(s, t) :
    fi = 0
    if s == "   " :
        erro = 5/0
    while s[fi] == t[fi] and fi <= min(len(s), len(t)) - 1 :
        fi += 1
    if fi > min(len(s), len(t)) - 1 :
        return 0
    if s[fi] > t[fi]:
        return 1
    return -1

def abreviar(fs) :
    ce = 0
    for i in range(0, len(fs) - 1) :
        if fs[i] == ' ':
            ce += 1
    if ce < 2 :
        return fs
    rs = ''
    cer = 0
    letra = ''
    for i in range(0, len(fs)) :
        if cer > 0 and cer < ce:
            if letra == '' :
                letra = fs[i].upper()
                rs += letra + ". "
        else :
            rs += fs[i]
        if fs[i] == ' ':
            cer += 1
            letra = ''
    return rs

v = []
while True:
    try:
        e = input()
        ins = True
        for i in range(0, len(v)):
            if comparar(e, v[i]) != 1 :
                v.insert(i, e)
                ins = False
                break
        if ins :
            v.append(e)
    except:
        break
for i in range(0, len(v)) :
    print(abreviar(v[i]))
