#include<stdio.h>
int main()
{
	int x=2,m;
	scanf("%d",&m);
	printf("%d=",m);
	do
	{
		if(!(m%x))
		{
			printf("%d",x);
			m/=x;
			printf("*");
		}
		if(m%x)
		x++;
		if(x==m)
		{
			printf("%d",x);
			break;
		}
	}while(m!=x);
}
