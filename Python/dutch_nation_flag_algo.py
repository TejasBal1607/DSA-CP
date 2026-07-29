n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

low = 0
mid = 0
high = n-1
while mid <= high:
    if nums[mid] == 0:
        nums[low], nums[mid] = nums[mid], nums[low]
        low += 1
        mid += 1
    elif nums[mid] == 1:
        mid += 1
    elif nums[mid] == 2:
        nums[high], nums[mid] = nums[mid], nums[high]
        high -= 1

print(nums)