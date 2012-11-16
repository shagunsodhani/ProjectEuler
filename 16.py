a=1
sum=0
for i in range (1,1001):
	a*=2;
while a>0:
	sum+=a%10
	a=a/10
print sum;
