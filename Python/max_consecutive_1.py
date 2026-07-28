n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

max = 0
count = 0
for i in nums:
    if i == 1:
        count += 1
        if count > max:
            max = count
    else:
        count = 0

print(max)