testcase = int(input())

for i in range(testcase):
    inputs = input().split()
    repeat = int(inputs[0])
    string = list(inputs[1])
    
    for j in range(len(string)):
        print(string[j] * repeat, end='')
    print()