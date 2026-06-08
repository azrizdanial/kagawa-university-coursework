x   = float(input('x を入力してください: '))
y   = float(input('y を入力してください: '))
z   = int(input('z を入力してください: '))
age = int(input('年齢を入力してください: '))

if x < 0:
    print('x は負の数です。')
    print('正の数や 0 ではありません。')

if y < 0:
    print('y は負の数です。')
    print('正の数や 0 ではありません。')
else:
    print('y は正の数または 0 です。')
    print('負の数ではありません。')

if z <= 0:
    print('z は負の数か 0 です。')
elif z < 10:
    print('z は一桁の正の数です。') 
elif z < 100:
    print('z は二桁の正の数です。') 
else:
    print('z は三桁以上の正の数です。') 

if 13 <= age <= 19:
    print('あなたはティーンエイジャーです。')
