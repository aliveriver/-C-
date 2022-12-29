#include<stdio.h>
#include<algorithm>
using namespace std;
int S,N;
int f[10000];
int from[10000];
int max(int a,int b){
	return a>b?a:b;
}
void bag(int a[])
{
	int i,j,k;
	for(i=1;i<=N;i++)
	{
		f[a[i]]=1;
		if(a[i]==S)
		{
			printf("%d ",a[i]);
			return;
		}
	}
	for(i=2;i<=N;i++)
		for(j=S;j>=a[i];j--)
		{
			f[j]=max(f[j-a[i]],f[j]);
			if(f[j]==1) from[j]=j-a[i];
		}
	if(f[S]==1)
	{
		k=S;
		while(from[k]!=0)
		{
			if(from[k-from[k]]==0)
				printf("%d ",k-from[k]);
			k=from[k];
		}
		printf("%d",k);
	}
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
