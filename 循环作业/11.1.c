#include<stdio.h>
int main()
{
	int i=1,x;
	while(i<=10)
	{
		for(x=1;x<=i;x++)
		{
			printf("*");
			if(x==i&&x<10) printf("\n");
		}
		i++;
	}
}
