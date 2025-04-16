s = int(input())

ans = 0
sum = 0
for i in range(1, s+1):
    if sum < s:
        ans += 1
        sum += i
    if sum > s:
        ans -= 1
        break
print(ans)