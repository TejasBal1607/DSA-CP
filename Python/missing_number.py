n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

print(sum(range(1, n + 1)) - sum(nums))