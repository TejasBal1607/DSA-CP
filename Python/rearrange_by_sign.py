n = int(input())
nums= []
for _ in input().split():
    nums.append(int(_))
ans = [0] * n
pos = 0
neg = 1
for i in range(n):
    if nums[i] >= 0:
        ans[pos] = nums[i]
        pos += 2
    else:
        ans[neg] = nums[i]
        neg += 2

print(ans)