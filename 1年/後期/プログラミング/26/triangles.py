a = int(input("長さ："))
number = 1
gap = 1
count = 0
for i in range(a):
    for count in range(a + 1):
        if count == gap:
            print(" ", end="")
        print(number % 10, end="")
        number += 1
        count += 1
    print()
    gap += 1
