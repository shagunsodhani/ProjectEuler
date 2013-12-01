import Euler
import math

n = 1000000
l = []
a = math.sqrt(n) + 2
a = int(a)
for i in range(2,a):
    if Euler.is_prime(i):
        l.append(i)

def count(n,l):
	a=0
	temp = 1
	for i in l:
		if(n%i==0):
			if(temp != i):
				a+=1
			temp = i
			n=n/i
		if(n==0):
			break

for i in range (2,n):
	if ( ( count(i,l) == 4 ) and ( count(i+1,l) == 4 ) and ( count(i+2,l) == 4 ) ):
		print i
		break
