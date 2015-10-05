function pb10()
	tic
	res=sum(primes(2*10.^6));
	fprintf('%.0f\n',res);
	toc
end
