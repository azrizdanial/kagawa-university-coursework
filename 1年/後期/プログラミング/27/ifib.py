def ifib():
    a = 1
    b = 2
    while True:
        yield a
        a, b = b, a + b


if __name__ == "__main__":
    for i, v in zip(range(15), ifib()):
        print(v, end=" ")
    print()
