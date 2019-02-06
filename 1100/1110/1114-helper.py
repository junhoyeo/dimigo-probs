# ========[d7.out]=========
# =======diff out 100 lines=====
# 1c1
# < 0 1 3 0 4 1 1 1
# ---
# > 0 1 3 0 4 1 1 1 0
# \ No newline at end of file
# ==============================
# ========[d1.out]=========
# =======diff out 100 lines=====
# 1c1
# < 0 1 3 0 2 1 2 1
# ---
# > 0 1 3 0 2 1 2 1 0
# \ No newline at end of file
# ==============================

for s in ['0 1 3 0 4 1 1 1', '0 1 3 0 2 1 2 1']:
    l = [int(i) for i in s.split(' ')]
    c = [10000, 5000, 1000, 500, 100, 50, 10, 5, 1]
    m = 0
    for i in range(len(l)):
        m += c[i]*l[i]
    print(m)
