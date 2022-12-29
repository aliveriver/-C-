#include<stdio.h>
int main ()
{
	int n=1;
	double sum=1,item=1;
	do
	{
		item=(4.0*n*n/(2*n-1)/(2*n+1));
		sum*=item;
		n++;
	}while(3.1415926-sum*2>1e-6);
	printf("%.6f",sum*2);
	return 0;
}
