#include<stdio.h>
int main()
{
	int a,n;
	int s;
	int i,j,x=0;
	scanf("%d%d",&n,&a);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			x+=a*pow(10,j);
		}
		s+=x;
		x=0;
	}
	printf("%d",s);
	return 0;
}
