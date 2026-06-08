a = int(input("長さ："))
b = 1
space_pos = 1

for i in range(a):
    count = 0
    while count < a + 1:
        if count == space_pos:
            print(" ", end="")
        print(b % 10, end="")
        b += 1
        count += 1
    print()
    space_pos += 1
