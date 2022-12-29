#include<stdio.h>
int main()
{
	int x,n,m,i,cunt=0,a=0;
	scanf("%d",&x);
	for(i=2;i<x-1;i++)
	{
		if(!(x%i))
		{
			printf("·ÇËØÊý\n");
			a=1;
			break;
		}
	}
	
	if(a!=1)
	printf("ËØÊý\n");
	
	a=0;
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
			for(x=2;x<i-1;x++)
		{
				if(!(i%x))
			{
				cunt++;
				break;
			}
		}
	}printf("%d",m-n-cunt+1);
}
