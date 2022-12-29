#include<stdio.h>
int judge(int n)
{
	int i;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i;
	int a[101]={0};
	for(i=2;i<=100;i++)
	{
		a[i]=judge(i);
	}
	for(i=2;i<=100;i++)
	{
		if(a[i]) printf("%3d",i);
	}
	return 0;
}
