testcase = int(input())

agree = 0
disagree = 0
    
for i in range(testcase):
    a = int(input())
    
    if(a == 1):
        agree += 1
    else:
        disagree += 1

if(agree > disagree):
    print(f'Junhee is cute!')
else:
    print(f'Junhee is not cute!')