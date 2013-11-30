import Euler

import math 

a = 100000000
b = 10000

m = []
ans  = 0
sum=0
for i in range(1,b+1):
	sum=i*i
	for j in range (i+1, b+1):
		sum+=j*j
		if(j>a):
			break
		if( Euler.is_palindromic(sum) and ( sum not in m) ):
			m.append(sum)
			print sum
			ans+=sum
print ans
