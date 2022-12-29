#include<stdio.h>
int main()
{
	double i=1,sum=1,item=1,x;
	int cunt=1;
	scanf("%lf",&x);
			for(cunt=1;cunt<=100;cunt++)
			{
				item*=i/x;
				sum+=1.0/item;
				i++;
			}
			printf("%f",sum);
			return 0;
}
