#include<stdio.h>
#include<algorithm>
using namespace std;
int S,N;
int f[1000][1000];
int from[1000][1000];
int max(int a,int b){
	return a>b?a:b;
}
void bag(int a[])
{
	int i,j,k;
	for(i=1;i<=N;i++)
	{
		f[1][a[i]]=1;
		if(a[i]==S)
		{
			printf("%d ",a[i]);
			return;
		}
	}
	for	(i=2;i<=N;i++)
		for(j=S;j>=0;j--)
			{
				f[i][j]=max(f[i-1][j],f[i-1][j-a[i]]);
				if(f[i-1][j]>f[i-1][j-a[i]])
				{
					if(f[i][j]==1) from[i][j]=j;
				}
				else
					if(f[i][j]==1) from[i][j]=j-a[i];
			}
	i=N;j=S;
	if(f[N][S]==1)
	{
		for(i=N;i>0;i--)
			if(f[i][j]==1)
			{
				if(j-from[i][j]!=0)
					printf("%d ",j-from[i][j]);
				j=from[i][j];
			}
	}
	return;
}
int main()
{
	int i;
	int a[100000];
	scanf("%d%d",&S,&N);
	for(i=1;i<=N;i++)
		scanf("%d",&a[i]);
	bag(a); 
	return 0;
}
