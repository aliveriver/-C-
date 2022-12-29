#include<stdio.h>
int main()
{
	double i=1,sum=1,item=1;
		while(1.0/item>1e-6)
		{
			item*=i;
			sum+=1.0/item;
			i++;
		}
		printf("%f",sum);
		return 0;
}
