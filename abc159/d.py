from math import factorial
N = int(input())
A = [int(i) for i in input().split()]

balls_num = [0 for i in range(N)]
for num in A:
    balls_num[num-1] += 1


for num in A:
    count = 0
    balls_num[num-1] -= 1
    for n in balls_num:
        if n<=1:
            continue
        else:
            count+=int((factorial(n) / factorial(2) / factorial(n-2)))
    balls_num[num-1] += 1
    print(count)
