#include<stdio.h>

int main ()
{
	int a[10]={0};
	int b[10]={0};
	int c[20]={0};
	int i=0,j=0,k=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	i=0;j=0;k=0;
	while(k<20)
	{
		if(a[i]>b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}else if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}else{
			c[k]=a[i];
			k++;
			i++;
			c[k]=b[j];
			k++;
			j++;
		}
	}
	for(k=0;k<20;k++)
		printf("%3d",c[k]);
	return 0;
}
