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
		printf("�������������ֹ�����-1\n");
		scanf("%d",&y);
		if(y!=-1)
		{
			if(y-x>0) printf("�µĹ���\n");
			if(y-x<0) printf("�µĹ�С\n");
			if(y-x==0)
			{
				printf("Ӯ��\n");
				x=rand()%10+1;
				i=0;
			}
		}else
		{
			printf("����\n");
			break;
		}
		i++;
		if(i>=6)
		{
			printf("����6�������䣡\n");
			x=rand()%10+1;
			i=0;
		}
	}
}
