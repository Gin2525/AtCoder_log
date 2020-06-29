import sys

x,y = map(int,input().split())

for turu in range(x+1):
    leg = turu*2 + (x-turu)*4
    if y == leg:
        print("Yes")
        sys.exit()

print("No")