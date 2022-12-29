#include<stdio.h>
int isPerfectnum (int x)
{
	int i=0,k=x;
	for(i=1;i<x;i++)
	{
		if(x%i==0) k-=i;
	}
	if(k==0) return 1;
	else return 0;
}
int main()
{
	int j;
	for(j=2;j<=1000;j++)
		if(isPerfectnum(j)) printf("%d\n",j);
	return 0;
}
