from datetime import datetime
mine = [int(i) for i in input().split(' ')]
target = [int(i) for i in input().split(' ')]
print(datetime.today)
print(list(set(target) - set(mine)))
# [1186, 1192, 1138]
