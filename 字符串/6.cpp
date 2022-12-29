#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int x=0,j,k=0,i=0;
	char *p1,*p2;
	char s[100][100];
	char temp[100]={'\0'};
	scanf("%s",a);
	scanf("%s",b);
	for(p1=b+strlen(b);p1>=b;p1--)
	{
		*p1='\0';
		for(p2=b;p2<p1;p2++)
		{
			strcpy(temp,p2);
			if(strstr(a,temp)!=NULL)
			{
				while(temp[i]!='\0')
				{
					s[x][i]=temp[i];
					i++;
				}
				x++;
				i=0;
			}
		}
	}
	for(j=0;j<x;j++)
	{
		if(strlen(s[k])<strlen(s[j]))
		{
			k=j;
		}
	}
	printf("%s",s[k]);
	return 0;
}
