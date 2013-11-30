import Euler
ans = 0
#p = Euler.generate_palindrome(1, 1000000)

p = Euler.generate_palindrome(1, 1000000000)

for i in p:
	if(Euler.is_palin(i,2)):
		ans+=i

print ans

