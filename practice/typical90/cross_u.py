import numpy as np
H, W = map(int, input().split())
A = np.array([list(map(int, input().split())) for _ in range(H)])
B = np.zeros_like(A)
row = [sum(A[i]) for i in range(H)]
col = [sum(A.T[i]) for i in range(W)]
B = np.array([[row[i]+col[j]-A[i, j] for j in range(W)]for i in range(H)])
for i in range(H):
    for j in range(W):
        print(B[i, j], end=" ")
    print()