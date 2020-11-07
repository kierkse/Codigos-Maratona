import math

def verifica(fs, fi, fc) :
    for j in range(fi, fi + math.floor(fc/2)):
        if fs[j] != fs [fi + fc - 1 - (j - fi)]:
            return False
    return True
c = int(input())
s = input()
i = 0
o = False
while i + c - 1 <= len(s) - 1 :
    o = verifica(s, i, c)
    if o :
        break
    i += 1
if o:
    print("S")
else:
    print("N")
