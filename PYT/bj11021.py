testcase = int(input())
result = []

for i in range(testcase):
    a, b = map(int, input().split())
    result.append(a+b)
    
for i in range(testcase):
    print(f'Case #{i+1}: {result[i]}')