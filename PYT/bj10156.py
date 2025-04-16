price, n, money = map(int, input().split())

if price * n >= money:
    print(price * n - money)
else:
    print(0)