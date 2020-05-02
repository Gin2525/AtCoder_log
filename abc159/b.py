import sys
S = input()
half_idx = (len(S)-1)//2
half = S[0:half_idx]
for i in range(half_idx-1):
    if half[i] != half[-1-i]:
        print("No")
        sys.exit()
    
for i in range((len(S)+1)-(len(S)+3)//2):
    if S[i] != S[-1-i]:
        print("No")
        sys.exit()
print('Yes')
        
