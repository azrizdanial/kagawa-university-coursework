def foo(no):
    xy = [(x, y) for x in range(1, no) for y in range(x + 1, no) if (x + y) % 3 == 0]
    return xy


n = int(input("n: "))
print(foo(n))
