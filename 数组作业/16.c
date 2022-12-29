#include<stdio.h>
int main()
{
	int a[3][5]={0};
	int i=0,j=0,rsum[5]={0},ksum[3]={0};
	double rave[5]={0},kave[3]={0},temp=0;
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	for(j=0;j<5;j++)
		for(i=0;i<3;i++)
		{
			rsum[j]+=a[i][j];
		}
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
		{
			ksum[i]+=a[i][j];
		}
	for(j=0;j<5;j++)
		rave[j]=rsum[j]/3.0;
	for(i=0;i<3;i++)
		kave[i]=ksum[i]/5.0;
	for(i=0;i<3;i++)
		for(j=0;j+1<3-i;j++)
		{
			if(kave[j]>kave[j+1])
			{
				temp=kave[j];
				kave[j]=kave[j+1];
				kave[j+1]=temp;
			}
		}
	for(i=0;i<5;i++)
		for(j=4;j-1>=i;j--)
		{
			if(rave[j]>rave[j-1])
			{
				temp=rave[j];
				rave[j]=rave[j-1];
				rave[j-1]=temp;
			}
		}
	for(i=0;i<3;i++)
		printf("%lf ",kave[i]);
	printf("\n");
	for(j=0;j<5;j++)
		printf("%lf ",rave[j]);
	return 0;
}
