import numpy as np

# 각 점수에 대한 문제 번호를 저장
# 해당 문제에서는 모든 점수는 제각기 다르므로 고유한 값을 가진다고 봐도 됨
dict = {}

# 각 문제에 대한 점수를 기록할 배열
arr = []

for i in range(8):
    n = int(input())
    dict[n] = i
    arr.append(n)

# 점수를 오름차순으로 정렬
arr.sort()

ans_sum = 0
ans_number = []
ans_sum = np.sum(arr[3:8])
for i in range(3, 8):
    ans_number.append(dict[arr[i]])
    
print(ans_sum)
ans_number.sort()
for i in range(len(ans_number)):
    print(f'{ans_number[i]+1} ', end='')