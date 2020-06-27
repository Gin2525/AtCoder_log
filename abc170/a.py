x = map(int,input().split())
ans = 1
for i in x:
    if i == 0:
        print(ans)
    else:
        ans +=1
