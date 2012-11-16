#number of methods is (20+20)!/(20!)(20!)
a=1
for i in range(1,21):
	a*=i
b=a
for i in range(21,41):
		b*=i
print(b/(a*a))
