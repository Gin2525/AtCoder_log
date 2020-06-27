def processValue(array:list):
	global minimumValue
	value = 0
	for i in array:
		value += fruits[i]
	
	if minimumValue == -1 or value < minimumValue:
		minimumValue = value

def combi(n,k,i,array):
	if i == k:
		processValue(array)
		return
	for j in range(array[i-1],n):
		if j in array[0:i]:
			continue
		array[i] = j
		combi(n,k,i+1,array)

fruits = []
minimumValue = -1
n,k = map(int,input().split())
fruits = [int(f) for f in input().split()]
combi(n,k,0,[0 for _ in range(k)])
print(minimumValue)
