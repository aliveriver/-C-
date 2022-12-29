#include<stdio.h>
int main()
{
	int m,i,sum=0,item=1;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		item*=i;
		sum+=item;
	}
	printf("%d",sum);
	return 0;
} 
