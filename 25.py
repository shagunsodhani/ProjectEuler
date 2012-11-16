a=1
b=1
c=1
d="1"
e=2	
while len(d)<1000:
	c=a+b
	a=b
	b=c
	d=str(c)
	e=e+1
print e
