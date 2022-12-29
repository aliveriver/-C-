#include<stdio.h>
int main()
{
	int m,n;
	int x,k;
	scanf("%d%d",&m,&n);
	x=!(m>n)?m:n;
	k=x-1;
	while(k>0) 
	{
		if(!(x%k))
		{
			printf("%d",k);
			break;
		}
		k--;
	}
	return 0;
} 
