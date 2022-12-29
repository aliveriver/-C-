#include<stdio.h>
int main()
{
	double x=2,y=1,z,a,b,c,sum=0;
	int cunt=0;
	for(;cunt<20;cunt++)
	{
		z=x/y;
		sum+=z;
		a=x+y;
		b=x;
		x=a;
		y=b;
	}
	printf("%f",sum);
	
}
