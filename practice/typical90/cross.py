import numpy as np

H,W=map(int,input().split())

a = [list(map(int, input().split())) for l in range(H)]
row=[0]*H
col=[0]*W

for i in range(H):
    for j in range(W):
        row[i]+=a[i][j]

for i in range(W):
    for j in range(H):
        col[i]+=a[j][i]
        
sum=[[0 for i in range(W)] for j in range(H)]
for i in range(0,H,1):
    for j in range(0,W,1):
        sum[i][j]=row[i]+col[j]-a[i][j]
        print(sum[i][j],end=" ")
    print("")