import Euler

l = []

for i in range(1000,10000):
	if(Euler.is_prime(i)):
		l.append(i)
#		print i

for i in l:
	for j in l:
		if ( (j>i) and Euler.is_perm(j,i) ):
			k = 2*j - i
			if ( (k<10000) and (k in l) ):
				if (Euler.is_perm(k, i) ):
					print i
					print j
					print k
					print "\n"
					break