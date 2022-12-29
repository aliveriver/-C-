#include<stdio.h>
int main(){
	double a,b,c;
	printf("请输入三个整数\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("和为%f，积为%f，平均值为%f",a+b+c,a*b*c,(a+b+c)/3.0);
	return 0;
}
