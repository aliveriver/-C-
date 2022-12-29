#include<stdio.h>
int main()
{
	int n,i=0,temp[10000]={0},m,j=1;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[10000]={0};
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=m;i++)
	{
		temp[i]=a[i];
	}
	for(i=m+1;i<=n;i++)
	{
		a[i-m]=a[i];
	}
	for(i=n-m+1;i<=n;i++)
	{
		a[i]=temp[j];
		j++;
	}
	for(i=1;i<=n;i++)
		printf("%d",a[i]);
	return 0;
}
