#include<stdio.h>
int main()
{
	double ave=0,sum=0;
	double a[10]={0};
	int i=0,count=0;
	for(i=0;i<10;i++)
	{
		scanf("%lf",&a[i]);
		sum+=a[i];
	}
	ave=sum/10;
	for(i=0;i<10;i++)
		if(a[i]>=ave)
			count++;
	printf("%d",count);
	return 0;
}
