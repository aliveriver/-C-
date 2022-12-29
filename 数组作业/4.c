#include<stdio.h>
int main()
{
	int a[11]={0};
	int i=10,k=0,j=1;
	for(k=1;k<=1000;k++)
	{
		i+=j;
		while (i>10) i-=10;
		a[i]++;
		j++;
		if(j>=10) j-=10;
	}
	i=1;
	for(i=1;i<=10;i++)
		if(a[i]==0)
		{
			printf("%d",i);
			break;
		}
	return 0;
}
