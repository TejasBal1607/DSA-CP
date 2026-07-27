n = int(input())
A = []
for _ in input().split():
    A.append(int(_))

m = int(input())
B = []
for _ in input().split():
    B.append(int(_))

union = []
i = 0
j = 0
while(i<n and j<m):
    if A[i] <= B[j]:
        if not union or union[-1] != A[i]:
            union.append(A[i])
        i += 1
    else:
        if not union or union[-1] != B[j]:
            union.append(B[j])
        j += 1

while(i<n):
    if not union or union[-1] != A[i]:
        union.append(A[i])
    i += 1

while(j<m):
    if not union or union[-1] != B[j]:
        union.append(B[j])
    j += 1

print(union)