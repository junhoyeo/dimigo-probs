from datetime import datetime
mine = [int(i) for i in input().split(' ')] # 본인 
target = [int(i) for i in input().split(' ')] # 타인 
print(datetime.today)
print(list(set(target) - set(mine)))
# [1186, 1192, 1138]
