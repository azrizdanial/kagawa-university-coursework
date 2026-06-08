def chome(n):
    return [i for i in range(n, n**2) if i * (i - 1) % 5 == 2]


a = int(input("Enter a number: "))
print(chome(a))
