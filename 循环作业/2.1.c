#include<stdio.h>
#include<math.h> 
int main()
{
	double sum=0,item=1,x=1;
	int i=1;
	while(fabs(item)>=1e-9)
	{
		item=x/(2.0*i-1);
		sum+=item;
		i++;
		x=-x;
	}
	printf("%f",4*sum);
	return 0;
}
