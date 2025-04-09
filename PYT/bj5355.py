testcase = int(input())

for i in range(testcase):    
    inputs = input().split()
    n = float(inputs[0])
    operator = inputs[1:]

    for i in range(len(operator)):
        if operator[i] == '@':
            n *= 3
        elif operator[i] == '%':
            n += 5
        else:
            n -= 7

    print(f'{n:.2f}')