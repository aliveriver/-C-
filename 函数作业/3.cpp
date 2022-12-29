#include<stdio.h>
int a(int x)
{
	int i;
	for(i=2;i<=x/2;i++)
		if(x%i==0) return 0;
	return 1;
}
int main()
{
	int i;
	for(i=2;i<200;i++)
		if(a(i)) printf("%4d",i);
	return 0;
}
