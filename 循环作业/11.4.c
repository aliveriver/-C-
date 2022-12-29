#include<stdio.h>
int main()
{
	int i=1,x,y=10;
	while(i<=10)
	{
		for(y=i;10-y>0;y++)
			{
				printf(" ");
			}
		for(x=1;x<=i;x++)
		{
			
			printf("*");
			if(x==i&&x<10) 
			{
				printf("\n");
			}
		}
		i++;
	}
}
