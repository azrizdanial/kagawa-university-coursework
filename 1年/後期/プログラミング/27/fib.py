def gfib(n):
    a = 1
    b = 1
    while a < n:
        yield a
        a, b = b, a + b


if __name__ == "__main__":
    for v in gfib(20):
        print(v, end=" ")
