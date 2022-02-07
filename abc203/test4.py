N,K=map(int,input().split())

data = [list(map(int, input().split())) for _ in range(N)]
min=10000000
median=0

for i in range(0,N):
    for j in range(0,N):
        sets=[]
        if i+K>N or j+K>N:
            continue
        else:
            for p0 in range(0,K):
                for p1 in range(0,K):
                    sets.append(data[i+p0][j+p1])
        sets.sort(reverse=True)
        median=sets[int(K*K/2)]
        
        if median<min:
            min=median

print(min)

