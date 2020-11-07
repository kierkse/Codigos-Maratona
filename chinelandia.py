import math

n = int(input())
p = []
a = []
b = []
for c in range(0, n) :
    pes = input().split(" ")
    pes[0] = int(pes[0])
    pes[1] = int(pes[1])
    pes[1] *= -1
    if pes[0] in p :
        if pes[0] in a:
            for i in range(0, len(a)) :
                if pes[0] == a[i]:
                    b[i] += 1
        else :
            ins = True
            for i in range(0, len(a)) :
                if abs(pes[0]) < abs(a[i]) :
                    a.insert(i, pes[0])
                    b.insert(i, 1)
                    ins = False
                    break
            if ins :
                a.append(pes[0])
                b.append(1)
    else:
        p.append(pes[0])
    if pes[1] in p :
        if pes[1] in a:
            for i in range(0, len(a)) :
                if pes[1] == a[i]:
                    b[i] += 1
        else :
            ins = True
            for i in range(0, len(a)) :
                if abs(pes[1]) < abs(a[i]) :
                    a.insert(i, pes[1])
                    b.insert(i, 1)
                    ins = False
                    break
            if ins :
                a.append(pes[1])
                b.append(1)
    else:
        p.append(pes[1])

if len(a) == 0:
    print("SEM TROCAS DESTA VEZ\n")
else:
    for i in range(0, len(a)):
        if a[i] < 0:
            print("{0} D {1}".format(a[i]*-1, b[i]))
        else :
            print("{0} E {1}".format(a[i], b[i]))
