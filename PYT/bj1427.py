n = input()

nums = [int(char) for char in n]
nums.sort(reverse=True)

for num in nums:
    print(num, end='')