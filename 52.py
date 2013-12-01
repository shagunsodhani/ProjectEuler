import Euler

a = 1
flag = 0
ans = 0

while(flag == 0):
	a*=10
	b = int (a*10/6) + 1
	for i in range(a, b):
		print i
		flag = 1
		for j in range(2,7):
			if ( Euler.is_perm(i, j*i) == 0 ):
				flag = 0
				break
		if(flag):
			ans = i
			break 

print ans

