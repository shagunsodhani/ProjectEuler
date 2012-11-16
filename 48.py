a=1
b=0
for i in range(1,1001):
	a=1
	for j in range(1,i+1):
		a*=i
	b+=a
print b	
