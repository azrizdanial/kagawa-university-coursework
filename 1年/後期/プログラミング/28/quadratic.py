def quadratic(a, b, c):
    d = b**2 - 4 * a * c
    r1 = (-b + d**0.5) / (2 * a)
    r2 = (-b - d**0.5) / (2 * a)
    return (r1, r2)


print("ax^2 + bx + c = 0\n3 つの実数 a, b, c を入力せよ")
a, b, c = map(float, (input("a: "), input("b: "), input("c: ")))

print(f"{a}x^2 + {b}x + {c} = 0")
roots = quadratic(a, b, c)
print("解:", roots)
