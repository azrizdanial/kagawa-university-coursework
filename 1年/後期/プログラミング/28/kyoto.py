def kyoto(path, x1, y1, x2, y2):
    if x1 == x2 and y1 == y2:
        print(path)
        return
    if x1 < x2:
        kyoto(path + "E", x1 + 1, y1, x2, y2)
    if y1 < y2:
        kyoto(path + "S", x1, y1 + 1, x2, y2)


while True:
    a = int(input("横方向の距離を入力してください: "))
    b = int(input("縦方向の距離を入力してください: "))
    if a <= 0 and b <= 0:
        print("終了します")
        break
    kyoto("", 0, 0, a, b)
