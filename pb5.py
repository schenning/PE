def isDivisibleNaive(n):
    for i in range(20,11,-1):
        if n%i != 0:
            return False
    return True

n=11
while isDivisibleNaive(n) == False:
    n+=1
print (n)
    
        
