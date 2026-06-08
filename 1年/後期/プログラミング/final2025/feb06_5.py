def chome(n):
    return [
        (x, y)
        for x in range(1, n**2)
        for y in range(x + 1, n**2)
        if (2 * x + y) % 7 == 2
    ]


print(chome(5))
