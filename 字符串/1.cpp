#include<stdio.h>
char s[10000];
int myStrLen()
{
	char *ip;
	ip=s;
	int ans=0;
	while(*ip!='\0')
	{
		ans++;
		ip++;
	}
	return ans;
}
int main()
{
	scanf("%s",s);
	printf("%d",myStrLen());
	return 0;
}
