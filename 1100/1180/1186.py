import itertools, sys
n = int(input())
for i in list(itertools.combinations_with_replacement(range(1,7), n)):
    for j in i:
        print(j,end='')
        print(' ')
    print()
