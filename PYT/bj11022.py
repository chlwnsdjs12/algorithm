testcase = int(input())

for i in range(testcase):
    a, b = map(int, input().split())
    print(f'Case #{i+1}: {a} + {b} = {a + b}')