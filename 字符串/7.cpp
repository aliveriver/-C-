#include<stdio.h>
#include<string.h>
int main()
{
	char a[80]={'\0'};
	char w[22][80]={'\0'};
	char temp[80];
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
	sum++;
	printf("%d\n",sum);
	for(j=0;j<22;j++)
	{
		pmin=j;
		if(w[pmin][0]=='\0') break;
		for(i=j;i<22;i++)
		{
			if(w[i][0]!='\0')
			{
				if(strlen(w[pmin])>strlen(w[i]))
				pmin=i;
			}
		}
		strcpy(temp,w[j]);
		strcpy(w[j],w[pmin]);
		strcpy(w[pmin],temp);
		printf("%s ",w[j]);
		w[j][0]='\0';
	}
	return 0;
}
