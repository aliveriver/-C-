#include<stdio.h>
int main ()
{
	int x=0,y=1,z,a,b,cunt=0,i=2;
	printf("0 1 ");
	while(cunt<18)
	{
		z=x+y;
		printf("%d ",z);
		i++;
		if(i==8)
		{
			printf("\n");
			i=0;
		}
		a=x;
		x=y;
		b=y;
		y=z;
		z=a;
		cunt++;
	}
	return 0;
}
