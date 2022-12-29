#include<stdio.h>
int main()
{
	int n,N=1,i=1;
	scanf("%d",&n);
	for(;i<=n;i++)
	{
		N*=i;
	}
	printf("%d",N);
	return 0;
} 
