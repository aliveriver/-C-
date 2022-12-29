#include<stdio.h>
int fo(int n)
{
	if(n<=2) return 1;
	else return fo(n-1)+fo(n-2);
}
int main()
{
	int a[21];
	int i=1;
	for(i=1;i<=20;i++)
		a[i]=fo(i);
	for(i=1;i<=20;i++)
		printf("%d\n",a[i]);
	return 0;
}
