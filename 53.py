import Euler

a = 0

for i in range(1,101):
	for j in range(1,101):
		if( Euler.binomial(i, j) > 1000000 ):
			a+= 1
print a