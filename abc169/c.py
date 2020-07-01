import math
line = input().split()
a = int(line[0])
b = round(100 * float(line[1]))
b2  = int(100*float(line[1]))

# c = round(a * b) = a * (b * 100)  / 100

for n in range(10):
    for j in range(100):
        b2 = n+j/100
        b2 = b2 * 100
        if round(b2) != math.floor(b2):
            
            print('!?')
            print(b2)
            print(round(b2),math.floor(b2))

print(int(a*b//100))