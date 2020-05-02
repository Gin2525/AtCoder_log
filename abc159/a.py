from math import factorial
N,M = map(int,input().split())
if N <= 1:
    n_count = 0
else:
    n_count = factorial(N) / factorial(2) / factorial(N-2)
if M <= 1: 
    m_count = 0
else:
    m_count = factorial(M) / factorial(2) / factorial(M-2)



print(int(n_count+m_count))
