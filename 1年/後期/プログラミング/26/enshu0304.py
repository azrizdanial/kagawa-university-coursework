print("二つの整数を入力してください。")

A = int(input("整数 A："))
B = int(input("整数 B："))
if A > B:
    print("A は B より大きいです。")
elif A < B:
    print("A は B より小さいです。")
else:
    print("A と B は等しいです。")
