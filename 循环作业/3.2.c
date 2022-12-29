#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int x=1,y,z;
	y=m>n?m:n;
	z=m>n?n:m;
	while(x!=0)
	{
		x=y%z;
		y=z;
		z=x;
	}
	printf("%d",y);
	return 0;
}
