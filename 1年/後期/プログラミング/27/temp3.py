def sort2(m, n):
    if m > n:
        return (m, n)
    else:
        return (n, m)


if __name__ == "__main__":
    i1 = int(input("整数 1 を入力してください: "))
    i2 = int(input("整数 2 を入力してください: "))

    (j1, j2) = sort2(i1, i2)
    print("大きいほうは", j1, "小さいほうは", j2, "です。")
