n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))
target = int(input())
hash = {}
for i in range(n):
    diff = target - nums[i]
    if diff in hash.keys():
        print([hash[diff], i])
        break
    hash[nums[i]] = i
else:
    print("No solution found")