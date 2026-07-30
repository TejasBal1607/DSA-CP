n = int(input())
nums = []
for _ in input().split():
    nums.append(int(_))

el = nums[0]
ctr = 0
for i in nums:
    if i == el:
        ctr += 1
    else:
         ctr -= 1
    if ctr == 0:
        el = i
        ctr = 1
print(el)