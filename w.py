p1,p2,p3,k = map(int,input().split())
p = [p1,p2,p3]
counts = [0,0,0]
nextlevel = [0,0,0]
number = []
number.append(1 )
created =0
while created < 1000:
    for j in range(3):
        nextlevel[j] = p[j] ** counts[j]
    smallest = nextlevel.index(min(nextlevel))
    if number[-1] == p[smallest]**counts[smallest]:
        counts[smallest] += 1
        continue
    number.append(p[smallest]**counts[smallest])
    counts[smallest] +=1
    created +=1

for x in number[:10]:
    print(x)
print(number[k])
