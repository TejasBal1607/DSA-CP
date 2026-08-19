n = int(input())
nums = []
for i in input().split():
    nums.append(int(i))

index = -1
for i in range(n-2, -1, -1):
    if nums[i] < nums[i+1]:
        index = i
        break

if index == -1:
    nums.sort(reverse=True)

else:
    for i in range(n-1, index, -1):
        if nums[i] > nums[index]:
            nums[i], nums[index] = nums[index], nums[i]
            break
    nums[index+1:n] = nums[index+1:n][::-1]
print(nums)