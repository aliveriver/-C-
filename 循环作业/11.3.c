#include<stdio.h>
int main()
{
	int i=10,x,y=10;
	while(i<=10)
	{
		for(x=1;x<=i;x++)
		{
			
			printf("*");
			if(x==i&&x>1) 
			{
				printf("\n");
				for(y=i;10-y>=0;y++)
			{
				printf(" ");
			}
			}
		}
		i--;
	}
}
