#include<stdio.h>
int a(int b[],int n)
{
	int sum=0;
	if(n==0) return 0;
	sum+=b[n-1]+a(b,n-1);
	return sum;
}
int main()
{
	int c[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&c[i]);
	printf("%d",a(c,n));
	return 0;
}
