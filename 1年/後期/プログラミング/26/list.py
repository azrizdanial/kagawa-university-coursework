print([x * y for x in range(1, 5) for y in range(5, 8)])

print([x * x for x in range(1, 11) if x % 2 == 1])

print([x * y for x in [1, 2] for y in [3, 5, 7]])

print([(x, y) for x in [1, 4, 7] for y in [2, 5, 8] if x < y])
