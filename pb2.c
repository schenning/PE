#include <stdio.h>
#include <math.h>
/* Problem 2: PE */
/* Written by Schenning */
int main() {

	int  res=0,a=1,b=1,tmp=0;
	while (tmp < 4*pow(10,6))
		{	
			tmp = a+b;
			a   = b;		
			b   = tmp;
			if (tmp%2==0)
			{
				res+=tmp;		
			}	
		}
	printf("%d\n", res);
return 0;

}
