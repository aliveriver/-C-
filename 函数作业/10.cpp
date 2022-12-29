#include<stdio.h>
#include<algorithm>
using namespace std;
int S,N;
int b(int a[],int s,int n,int y) //数组 现有重量 第几个数  取或不取 
{
	 if(n>N) return 0;
	 int m=s;
	 if(s>S) return 0;
	 if(s==S) return 1;
	 else
	 {
	 	if(y)
	 	{
	 		m+=a[n];
		}
		if(b(a,m,n+1,1))
		{
			if(y)
				printf("%d ",a[n]);
			return 1;
		}
		if(b(a,m,n+1,0))
		{
			if(y)
				printf("%d ",a[n]);
			return 1;	
		}
	 }
}
int main()
{
	int a[100000];
	scanf("%d%d",&S,&N);
	int i;
	for(i=1;i<=N;i++)
		scanf("%d",&a[i]);
	if(b(a,0,1,1)) ;
	else b(a,0,1,0);
	return 0;
}
