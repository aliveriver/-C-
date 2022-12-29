#include<stdio.h>
int a(int n)
{
	int i,s=0,x=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if(s==n)
	x=1;
	return x;
}
int main()
{
	int j;
	for(j=2;j<=1000;j++)
	{
		if(a(j))
		printf("%4d",j);
	}
	return 0;
}
