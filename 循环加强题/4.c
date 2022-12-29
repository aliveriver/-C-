#include<stdio.h>
int main ()
{
	char a,b,c;
	for(a='x';a<='z';a++)
	{
		for(b='x';b<='z';b++)
		{
			for(c='x';c<='z';c++)
			{
				{
					printf("order is a---%c b---%c c---%c\n",a,b,c);
				}
			}
		}
	}
	return 0;
}
