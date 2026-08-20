n, m = map(int, input().split())
matrix = []
for i in range(n):
    matrix.append(list(map(int, input().split())))

for i in range(n-1):
    for j in range(i+1,n):
        matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

for i in matrix:
    i.reverse()

for i in matrix:
    print(i)