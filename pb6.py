def sumOfSquares(N):
	return (sum([x**2 for x in range(1,N+1)]))
def squareOfSums(N):
	return((sum([x for x in range(1,N+1)]))**2)


print squareOfSums(100)-sumOfSquares(100)
