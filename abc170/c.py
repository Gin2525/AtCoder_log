import sys
x, n = map(int, input().split())
if n == 0:
    print(x)
    sys.exit()
p = [int(x) for x in input().split()]


diff = 0
while(True):
    if not x + diff in p:
        print(x+diff)
        sys.exit()

    if diff < 0:
        diff *= -1
    else:  # 0以上
        diff *= -1
        diff -= 1
