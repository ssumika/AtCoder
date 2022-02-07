N,K=map(int,input().split())

xy = [map(int, input().split()) for _ in range(N)]
x,y= [list(i) for i in zip(*xy)]

p=0
while(1):
    for i in range(0,N):
        if p==x[i]:
            K+=y[i]
    if K==0:
        break
    p+=1
    K-=1

print(p)
    
    

