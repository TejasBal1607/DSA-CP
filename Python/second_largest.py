n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

largest = nums[0]
slargest = -1
for i in nums:
    if i > largest:
        slargest = largest
        largest = i
    elif i > slargest and i != largest:
        slargest = i
print(slargest)