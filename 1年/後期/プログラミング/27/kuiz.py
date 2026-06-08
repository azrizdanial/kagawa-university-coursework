print([(x, y) for x in range(1, 4) for y in range(x, 6) if (x + y) % 2 == 1])

print([x * y for x in [1, 2] for y in [3, 5, 7]])

print([(x, y) for x in [1, 4, 7] for y in [2, 5, 8] if x < y])
