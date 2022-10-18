a2 = [[1,2],[3,1]]
a3 = [[1,1], [0,2]]
ans = [[0, 0], [0, 0]]

for i in range(2):
    for j in range(2):
        for k in range(2):
            ans[i][j] += a2[i][k] * a3[k][j]
