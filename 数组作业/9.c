#include<stdio.h>
int main()
{
	int n;
	int a[100000]={0};
	int b[100000]={0};
	int i=0,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i==j) continue;
			if(a[i]==a[j]) a[j]=0;
		}
	for(i=0;i<n;i++)
		if(a[i]!=0) printf("%3d",a[i]);
	return 0;
}
