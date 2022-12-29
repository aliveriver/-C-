#include<stdio.h>
int a[20];
int b[20][2];
int c[25];
int d[25]={0};
int main()
{
	int i=0,j=0,k=0;
	for(i=0;i<25;i++)
		c[i]=1;
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	for(i=0;i<20;i++)
		if(a[i]%2==0) c[j]=a[i],j++;
		else d[k]=a[i],k++;
	i=0,j=0,k=0;
	while(d[k]!=0)
	{
		b[k][1]=d[k];
		k++;
	}
	i=0,j=0,k=0;
	while(c[j]!=1)
	{
		b[j][0]=c[j];
		j++;
	}
	i=0,j=0,k=0;
	while(d[k]!=0)
	{
		printf("%d ",b[k][1]);
		k++;
	}
	printf("\n");
	while(c[j]!=1)
	{
		printf("%d ",b[j][0]);
		j++;
	}
	return 0;
}
