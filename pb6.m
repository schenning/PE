function res=pb6()
tic
%
squaresOfSums=power(sum(1:100),2);
sos=zeros(1,10);
for i = 1:100
    sos(i) = power(i,2);
end
sumOfSquares= sum(sos);
res=squaresOfSums-sumOfSquares;
toc

