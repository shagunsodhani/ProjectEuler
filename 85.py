import Euler
e = 100000000
ans = 0
a = 8000000

x = 2000;
y = 1;
 
while (x >= y):
	temp = x * (x + 1) * y * (y + 1)
	if(e > abs(temp-a) ):
		ans=x*y
		e = abs(temp-a) 		

	if(temp > a):
		x-=1
	else:
		y+=1

print ans

