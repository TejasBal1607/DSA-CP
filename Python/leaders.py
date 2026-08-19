n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

maxi = -1e9
ans = []
for i in range(n-1, -1, -1):
    if nums[i] > maxi:
        maxi = nums[i]
        ans.append(nums[i])
        
for num in reversed(ans):
    print(num, end=" ")