def comparar(s, t) :
    fi = 0
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
    e = input()
    if e == '':
        break
    n = abreviar(e)
    ins = True
    for i in range(0, len(v)):
        if comparar(n, v[i]) != 1 :
            print(comparar(n, v[i]))
            v.insert(i, n)
            ins = False
            break
    if ins :
        v.append(n)
for i in range(0, len(v)) :
    print(v[i])
