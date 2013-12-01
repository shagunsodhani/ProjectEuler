import Euler

ans  = 0

def check(n):
	a = n
	for i in range(1,51):
		a = a + int(str(a)[::-1])
		#print a
		if( str(a)==str(a)[::-1] ):
			return 0
		#	print n
	return 1

for i in range(1,10001):
	#print i
	if(check(i)):
		ans+=1

print ans