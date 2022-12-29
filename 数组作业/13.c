#include<stdio.h>
int main()
{
	int x[15][15]={0};
	int i=1,j=3,k=1;
	x[1][1]=1;
	x[1][2]=1;
	x[2][2]=1;
	for(j=3;j<=10;j++)
	{
		x[1][j]=1;
		x[j][j]=1;
	}
	for(j=3;j<=10;j++)
		for(i=2;i<=j-1;i++)
		{
			x[i][j]=x[i-1][j-1]+x[i][j-1];
		}
	for(j=1;j<=10;j++)
		for(i=1;i<=j;i++)
		{
			printf("%d ",x[i][j]);
			if(i==j) printf("\n");
		}
	return 0;
}
