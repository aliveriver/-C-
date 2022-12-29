#include<stdio.h>
int main()
{
	int a[10000];
	int k=0,i=1,j=0,m,x=0;
	a[k]=getchar();
	while(a[k]!=10)
	{
		k++;
		a[k]=getchar();
		i++;
	}
	i-=2;
	for(m=0;m<=i;m++)
	{
		a[m]-='0';
	}
	if(i%2==0)
	{
		m=i;
		for(;j<=(m/2);j++)
		{
			if(a[i]!=a[j])
			x=1;
			i--;
		}
	}
	else
	{
		m=i;
		for(;j<=(m/2);j++)
		{
			if(a[i]!=a[j])
			x=1;
			i--;
		}
	}
	if(x==1)
	{
		printf("no");
	}
	if(x==0)
	{
		printf("Yse");
	}
	return 0;
}
