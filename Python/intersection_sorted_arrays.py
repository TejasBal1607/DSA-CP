n = int(input())
A = []
for _ in input().split():
    A.append(int(_))

m = int(input())
B = []
for _ in input().split():
    B.append(int(_))

intersection = []
i = 0
j = 0
while(i<n and j<m):
    if A[i] < B[j]:
        i += 1
    elif A[i] > B[j]:
        j += 1
    else:
        intersection.append(A[i])
        i += 1
        j += 1

print(intersection)