n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

k = int(input())
presum = {}
sum = 0
count = 0
for i in range(n):
    sum += nums[i]
    if sum == k:
        count += 1
    rem = sum - k
    if rem in presum:
        count += presum[rem]
    if sum not in presum:   
        presum.setdefault(sum, 1)
    else:
        presum[sum] += 1

print(count)