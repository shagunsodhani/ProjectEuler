from Euler import is_pandigital
 
p = set()
for i in range(2,100):
  start = 1234
  if i>9: start = 123
  for j in range(start, 10000/i+1):
    if is_pandigital(str(i)+str(j)+str(i*j)): p.add(i*j)
 
print "Answer to PE32 = ",sum(p)