#include<stdio.h>
int main()
{
	int a[100];
	int n,i=0,temp=0;;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}
