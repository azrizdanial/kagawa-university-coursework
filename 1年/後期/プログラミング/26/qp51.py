for i in range(3):
    print(i, end=", ")
print()

for i in range(3, 6):
    print(i, end=", ")
print()

for i in range(2, 8, 3):
    print(i, end=", ")
print()

[x * y for x in [1,2] for y in [3,5,7]]
# Output:
# [3, 5, 7, 6, 10, 14]

[(x, y) for x in [1,4,7] for y in [2,5,8] if x < y]
# Output:
# [(1, 2), (1, 5), (1, 8), (4, 5), (4, 8), (7, 8)]