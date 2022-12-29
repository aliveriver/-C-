#include<stdio.h>
int main()
{
	int a[10000]={0};
	int b[1000][100]={0};
	int sum[10000]={0};
	int n;
	int i=0,j=0,k=0,max=0,kmax=0;;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i+1<n;)
	{
		if(a[i]+a[i+1]>0)
		{
			 b[j][k]=a[i];
			 b[j+1][k]=a[i+1];
			 sum[k]+=a[i]+a[i+1];
			 i+=2;
			 j+=2;
		}
		else if(a[i]>0)
		{
			b[j][k]+=a[i];
			sum[k]+=a[i];
			k++;
			i=i+1;
			j=0;
		}else
		{
			k++;
			i+=1;
			j=0;
		}
	}
	k=0;j=0;
	while(sum[k]!=0)
	{
		if(sum[k]>max)
		{
			max=sum[k];
			kmax=k;
			k++;
		}else k++;
	}
	for(j=0;b[j][kmax]!=0;j++)
		printf("%d ",b[j][kmax]);
	return 0;
}
