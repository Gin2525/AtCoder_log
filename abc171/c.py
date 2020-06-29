# 最下位から求めていく。
# nを受け取る
# i は 0　スタート
# n % 26 = x
# n から　x + 26 ** iを引く
# n　が 0 になるまで繰り返す

def addChar(x):
	global ans
	addC = ''
	if x == 0:
		addC = 'z'
	else:
		addC = chr(96+x)
	ans = ans + addC

n = int(input())
i = 0
d = []
while(n > 26):
	d.append(n%26)
	n = n//26
print(d)
d.append(n)

print(d)

	