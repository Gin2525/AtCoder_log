def addAndDeleteMin():
	global ans
	global p
	minv = min(p)
	ans += minv
	p.remove(minv)

n,k = map(int,input().split())
p = [int(x) for x in input().split()]
ans = 0
for i in range(k):
	addAndDeleteMin()
print(ans)