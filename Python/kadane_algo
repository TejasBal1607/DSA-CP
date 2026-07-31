n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

max = float('-inf')
sum = 0
ans_start = -1
ans_end = -1
for i in range(n):
    if sum == 0:
        start = i
    sum += nums[i]
    if sum > max:
        max = sum
        ans_start = start
        ans_end = i
    if sum < 0:
        sum = 0
print(max, nums[ans_start:ans_end + 1])