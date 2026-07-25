n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

tmp = nums[0]
for i in range(1,n):
    nums[i-1] = nums[i]
nums[n-1] = tmp

print(nums)