#include<stdio.h>
int main()
{
	char a[10000];
	gets(a);
	int num=0,word=0,k=0,other=0;
	int i=0;
	while(a[i]!='\0')
	{
		if(a[i]>='0'&&a[i]<='9') num++;
		else if(a[i]>='A'&&a[i]<='Z') word++;
		else if(a[i]>='a'&&a[i]<='z') word++;
		else if(a[i]==32) k++;
		else other++;
		i++;
	}
	printf("%d %d %d %d",num,word,k,other);
	return 0;
}
