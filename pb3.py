def factorize(n):
    res = []
    tmp = 2
    while tmp*tmp <=n:
        while(n%tmp)==0:
            res.append(tmp)
            n//=tmp
        tmp+=1
    if n>1:
        res.append(n)
    return res

print max(factorize(600851475143))
