from sets import Set
s = Set()
for x in range(2, 101):
	for y in range(2, 101):
		z=x**y
		s.add(z)
print len(s)