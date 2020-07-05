h, w, k = map(int, input().split())
c = []
ans = 0
for i in range(h):
    c.append(input())

for maskR in range(1 << h):
    for maskC in range(1 << w):
        black = 0
        for i in range(h):
            for j in range(w):
                if maskR >> i & 1 == 1 and maskC >> j & 1 == 1 and c[i][j] == '#':
                    black += 1

        if black == k:
            ans += 1

print(ans)
