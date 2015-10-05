# Problem 2: PE
# written by Schenning


res = 0
a,b=1,1
while a < 4*10**6:
    a,b =b, a+b
    if a%2==0:
        res+=a

print res


