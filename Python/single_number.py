n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

single = 0
for i in nums:
    single ^= i
print(single)