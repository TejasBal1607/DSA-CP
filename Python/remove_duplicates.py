n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

j = 0
for i in range(1,n):
    if nums[i] != nums[j]:
        j += 1
        nums[j] = nums[i]

print(j+1, nums[:j+1])