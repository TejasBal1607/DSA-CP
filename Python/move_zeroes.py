n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

j = -1
for i in range(n):
    if nums[i] == 0:
        j = i
        break
    
if(j != -1):
    for i in range(j+1,n):
        if nums[i] != 0:
            nums[i], nums[j] = nums[j], nums[i]
            j += 1

print(nums)