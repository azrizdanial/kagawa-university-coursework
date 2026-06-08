def nonaryStr(n):
    ret = str(n % 9)
    n //= 9

    while n >= 1:
        ret = str(n % 9) + ret
        n //= 9

    return ret

num = [0, 1, 8, 9, 10, 81, 100]

for n in num:
    print(f"{n} の9進数 {nonaryStr(n)}")
