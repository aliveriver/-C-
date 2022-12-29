#include<stdio.h>
int main()
{
	int x,y,z,cunt=0;
	for(x=1;x<=4;x++)
	{
		for(y=1;y<=4;y++)
		{
			for(z=1;z<=4;z++)
			{
				printf("%d%d%d\n",x,y,z);
				cunt++;
			}
		}
	}
	printf("%d",cunt);
}
