for a in range(1, 9):
    for b in range(1, 9):
        for c in range(1, 9):
            k = '%d%d8%d'%(a,b,c)
            m = k.replace('8', '6').replace('2', '8')
            if int(m) == 3*(int(k)+2):
                print(a+b+c)
