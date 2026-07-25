n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

k = int(input())

k = k % n

def reverse(nums, low, high):
    while low < high:
        nums[low], nums[high] = nums[high], nums[low]
        low += 1
        high -= 1

reverse(nums, 0,k-1)
reverse(nums, k,n-1)
reverse(nums, 0,n-1)
print(nums)