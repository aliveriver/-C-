#include<stdio.h>
int main ()
{
	printf("«Î ‰»Îº∆À„ Ω\n");
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	if(c=='+')
	{
		printf("%d+%d=%d\n",a,b,a+b);
	}else if(c=='-')
	{
		printf("%d-%d=%d\n",a,b,a-b);
	}else if(c=='*')
	{
		printf("%d*%d=%d\n",a,b,a*b);
	}else if(c=='/')
	{
		printf("%d/%d=%d\n",a,b,a/b);
	}
	return 0;
}
