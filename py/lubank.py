m = [[0],[0],[0],[0],
     [0],[0],[0],[0],
     [0],[0],[0],[0]]

dados = []
nomes = []

for z in range(0, 12):
    an = input()
    if an[1] == ";":
        cod = int(an[0])
        start = 2
    else :
        cod = int(an[0] + an[1])
        start = 3
    adrow = []
    for i in range(start, len(an), 2):
        adrow.append(an[i])
    m[cod - 1] = adrow

conta = input().split(";")
while not (conta[0] == "fim" and conta[1] == "fim"):
    conta.append(0)
    dados.append(conta)
    nomes.append(conta[0])
    conta = input().split(";")

while True:
    try:
        login = input()
        nome = ""
        i = 0
        while login[i] != ";":
            nome += login[i]
            i += 1
        if nome in nomes:
            for j in range(0, len(nomes)):
                if nome == nomes[j]:
                    senha = dados[j][1]
                    savej = j
            i += 1
            cont = 0
            erro = False
            if dados[savej][2] >= 3:
                erro = True
            while i < len(login):
                if login[i + 1] == ";":
                    cod = int(login[i]) - 1
                    i += 2
                else:
                    cod = int(login[i] + login[i + 1]) - 1
                    i += 3
                if not senha[cont] in m[cod]:
                    erro = True
                    break
                cont += 1
            if cont < len(senha):
                erro = True
            if erro:
                dados[savej][2] += 1
                if dados[savej][2] >= 3:
                    print(nome + ": usuario bloqueado\n")
                else:
                    print(nome + ": acesso negado\n")
            else:
                dados[savej][2] = 0
                print(nome + ": acesso concedido\n")
        else:
            print(nome + ": usuario inexistente\n")
    except:
        break
