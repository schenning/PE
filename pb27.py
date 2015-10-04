def pb27():
#	coeff=0
	ok=False
	longest = 0
	numb=[42,0]
	while(ok==False):
		cnt=0
		n=0
		a=0
		b=0	
		while is_prime(n**2 + a*n + b)==1: 
			for a in range(-1000,1000):
				for b in range(-1000,1000):
					cnt+=1

		n+=1
		if(cnt>longest):
			longest = cnt
			numb=[a,b]
			print longest
			print numb




def is_prime(n):
  if n == 2 or n == 3: return True
  if n < 2 or n%2 == 0: return False
  if n < 9: return True
  if n%3 == 0: return False
  r = int(n**0.5)
  f = 5
  while f <= r:
    if n%f == 0: return False
    if n%(f+2) == 0: return False
    f +=6
  return True   


pb27()
