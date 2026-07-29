# TC O(2n) (worst case TC) SC O(1)

n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

k = int(input())
left = 0
right = 0
sum = nums[0] if n > 0 else 0
max_length = 0
while right < n:
    while sum > k and left <= right:
        sum -= nums[left]
        left += 1
    if sum == k:
        max_length = max(max_length, right - left + 1)
    right += 1        
    if right < n:
        sum += nums[right]
print(max_length)
    