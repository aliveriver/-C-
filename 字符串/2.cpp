#include<stdio.h>
char* myStrCat(char a[],char b[])
{
	int i=0,j=0;
	while(a[i]!='\0')
	{
		i++;
	}
	while(b[j]!='\0')
	{
		a[i]=b[j];
		i++;
		j++;
	}
	return a;
}
int main()
{
	char a[10000],b[10000];
	scanf("%s",a);
	scanf("%s",b);
	printf("%s",myStrCat(a,b));
	return 0;
}
