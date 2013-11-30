import Euler

import math

def isPentagonal(n):
    a = math.sqrt(24*n + 1)
    a = (a + 1)/6
    return a == int(a)

'''
print isPentagonal(1)
print isPentagonal(5)
print isPentagonal(12)
print isPentagonal(10)
'''
flag = 1
i=1
while (flag):
    i+=1
    n = i * (3 * i - 1) / 2
    print i
    for j in range (i-1, 0, -1):
#        print j
        m = j * (3 * j - 1) / 2
        if ( isPentagonal(n - m) and isPentagonal(n + m) ):
            result = n-m;
            flag = 0
            break

print result

