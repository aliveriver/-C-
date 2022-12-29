#include<stdio.h>
#include<string.h>
int main()
{
	char a[80];
	char w[22][80]={'\0'};
	int i=0,j=0,k=0;
	int pmin=0,sum=0;
	gets(a);
	for(i=0;i<80;i++)
	{
		if(a[i]!=' ')
		{
			w[j][k]=a[i];
			k++;
		}
		if(a[i]==' '&&a[i+1]!=' ')
		{
			j++;
			k=0;
			sum++;
		}
	}
	while(w[j]!='\0'&&j>=0)
	{
		printf("%s",w[j]);
		printf(" ");
		j--;
	}
	return 0;
}
