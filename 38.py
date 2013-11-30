import Euler


for i in range(9234,9877):
	temp = str(i)+str(2*i)
	if Euler.is_pandigital (temp) :
		print temp
		print i