#include<stdio.h>
int main(){
	double p,w,s;
	printf("put in kilometre and weight\n");
	scanf("%lf%lf",&s,&w);
	if(s<100){
		p=30;
	}else if(s<200)
	{
		p=27.5;
	}else if(s<300)
	{
		p=25;
	}else if(s<400)
	{
		p=22.5;
	}else
	{
		p=20;
	}
	printf("cost=%f",p*w*s);
	return 0;
}
