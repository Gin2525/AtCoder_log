import sys
n = int(input())
limit = 10 ** 18
ans = 1
a = [int(x) for x in input().split() ]
if 0 in a:
    print(0)
    sys.exit()

for i in a:
    ans *= i
    if ans > limit:
        print(-1)
        sys.exit()

print(ans)