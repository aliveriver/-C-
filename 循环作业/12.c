#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int x,i=0,y;
	srand(time(0));
	x=rand()%10+1;
	while(1)
	{
		printf("请猜数，如若终止则键入-1\n");
		scanf("%d",&y);
		if(y!=-1)
		{
			if(y-x>0) printf("猜的过大\n");
			if(y-x<0) printf("猜的过小\n");
			if(y-x==0)
			{
				printf("赢！\n");
				x=rand()%10+1;
				i=0;
			}
		}else
		{
			printf("结束\n");
			break;
		}
		i++;
		if(i>=6)
		{
			printf("超过6次啦，输！\n");
			x=rand()%10+1;
			i=0;
		}
	}
}
