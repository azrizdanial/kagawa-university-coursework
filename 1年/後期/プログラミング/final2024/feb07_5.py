def chome(n):
    return [i for i in range(n, n**2) if (i * (i - 1)) % 5 == 2]


print(chome(5))
