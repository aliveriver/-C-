#include<stdio.h>
int A[100],B[100],C[100];
void han(int n,char a,char b,char c)
{
	int i;
	if(n==1)
	{
		printf("%c-->%c\n",a,c);
		return;
	}
	else
	{
		han(n-1,a,c,b);
		printf("%c-->%c\n",a,c);
		han(n-1,b,a,c);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	han(n,'a','b','c');
	return 0;
}
