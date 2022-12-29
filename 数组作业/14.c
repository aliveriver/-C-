#include<stdio.h>
int main()
{
	int a[5][5]={0};
	int i=0,j=0,max[5]={0},imax[5]={0},x[5]={0},k=0,y=0;
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
			scanf("%d",&a[i][j]);
	for(j=0;j<5;j++)
		for(i=0;i<5;i++)
		if(max[j]<a[i][j]) max[j]=a[i][j],imax[j]=i;
	for(k=0;k<5;k++)	
		for(j=0;j<5;j++)
			if(a[imax[k]][k]>a[imax[k]][j]) x[k]=1;
	for(k=0;k<5;k++)
	{
		if(x[k]==0) printf("%d\n",max[k]),y=1;
	}
	if(y==0) printf("no");
	return 0;
}
