A = int(input("左下直角二等辺三角形を作ります。\n短辺: "))

for i in range(A):
    for j in range(i + 1):
        print("*", end="")
    print()
