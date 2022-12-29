#include<stdio.h>
#define N 5
int main()
{
	int a[3][N];
	int b[N][2];
	int c[3][2]={0};
	int i=0,j=0,k=0;
	for(j=0;j<N;j++)
		for(i=0;i<3;i++)
			scanf("%d",&a[i][j]);
	for(j=0;j<2;j++)
		for(i=0;i<N;i++)
			scanf("%d",&b[i][j]);
	for(j=0;j<2;j++)
		for(i=0;i<3;i++)
			for(k=0;k<N;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
	for(j=0;j<2;j++)
		for(i=0;i<3;i++)
			printf("%d ",c[i][j]);
	return 0;
}
