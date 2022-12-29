#include<stdio.h>
int main()
{
	int a[4][4]={0};
	int i=1,j=1;
	int b[4]={0};
	for(i=1,j=1;i<=3;)
	{
		scanf("%d",&a[j][i]);
		if(j<=3) j++;
		if(j==4) j=1,i++;
	}
	for(i=1,j=1;i<=3;)
	{
		if(a[j][i]%2==0) b[i]++;
		if(j<=3) j++;
		if(j==4) j=1,i++;
	}
	for(i=1;i<=3;i++)
		printf("%3d",b[i]);
	return 0;
}
